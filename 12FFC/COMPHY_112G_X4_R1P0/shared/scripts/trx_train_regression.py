import time
import serial
import json
import sys
import io
from re import sub
from numpy import average
from threading import Thread

## add CAP2 Python source location
sys.path.insert(0, 'C:\Marvell\CAP2\BIN')
sys.path.insert(0, 'C:\Marvell\CAP2\Python')
from cap import cap

lane_default = 7
isi_box_port = 'COM14'
uart_port = 'COM5'
script_path = r'C:\Marvell\PHY\PHY_Init\12FFC_COMPHY_112G_X4_R1P0\56G CDS_L1'
script_name = r'53G_PAM4_PRBS31_EXT_Loopback_BT31inch_Train_FWCDS.txt'
timestr = time.strftime("%Y%m%d-%H%M%S") # appended to filenames

def readReg(lane, nameStr, convStr):
    """ read a register from cap """
    # suppress stdout for cap which by default displays the register name and
    # read-back
    save_stdout = sys.stdout
    sys.stdout = io.BytesIO()
    x = cap('rpt2','readfield',lane,nameStr, convStr)['Raptor2']['formatted']
    sys.stdout = save_stdout
    return x

def writeReg(lane, nameStr, value):
    """ write a register from cap """
    cap('rpt2','writefield',lane,nameStr, value)

class UARTdump(Thread):
    """ parallel process to capture all UART debug data into file """
    def __init__(self):
        Thread.__init__(self)
        self.s = serial.Serial(uart_port, 460800)
        self.f = open("debugdump_" + timestr + ".txt", "w")
        
    def close(self):
        while (self.s.inWaiting()):
            time.sleep(1)
        while (True):
            try:
                self.f.close()
            except:
                time.sleep(1)
            else:
                return
                
    def write(self, text):
        """ write some custom text into the debugdump file """
        while (self.s.inWaiting()):
            time.sleep(1)
        self.f.write('\n' + text)
        
    def run(self):
        while True:
            num = self.s.inWaiting()
            data = self.s.read(num)
            data = sub(r"[\r]*", "", data)
            if (self.f.closed):
                break
            self.f.write(data)
        self.s.close()

def toggle(reg_name, lane = lane_default):
    """ send a pulse to a 1-bit register 0-->1-->0 """
    writeReg(lane, reg_name, 0)
    time.sleep(0.1)
    writeReg(lane, reg_name, 1)
    time.sleep(0.1)
    writeReg(lane, reg_name, 0)
    time.sleep(0.1)

def on(reg_name, lane = lane_default):
    """ enable a 1-bit register """
    writeReg(lane, reg_name, 1)
    time.sleep(0.1)

def off(reg_name, lane = lane_default):
    """ disable a 1-bit register """
    writeReg(lane, reg_name, 0)
    time.sleep(0.1)

def read(reg_name, lane = lane_default):
    """ wrapper for readReg """
    return readReg(lane, reg_name, 'd')

def write(reg_name, value, lane = lane_default):
    """ wrapper for writeReg """
    writeReg(lane, reg_name, value)

def channel(level):
    """ change the ISI Box level """
    with serial.Serial(isi_box_port, 9600) as s:
        s.write('OUTPUT:ISI:LEVEL ' + str(level) + '\n')
    time.sleep(5)
    print "Channel changed to: ", level, "%"

def init_channel():
    """ initialize ISI Box to remote mode """
    with serial.Serial(isi_box_port, 9600) as s:
        s.write('SYST:REM\n')
    time.sleep(1)

def write_to_file(x):
    """ write regression results into *.json file """
    with open("results_" + timestr + ".json", "w") as file:
        json.dump(x, file)

def summary():
    """ display a summary of the regression test """
    print "Chan\tBER\tFail"
    with open("results_" + timestr + ".json") as json_data:
        [channels, BER, FAIL] = json.load(json_data)
    for i in range(len(channels)):
        print "%d\t%.3e\t%d" % (channels[i], average(BER[i]), sum(FAIL[i]))

def main():
    """
    MAIN function, this runs automatically when trx_train_test.py is invoked
    """

    print "Begin TRX Train regression test"
    uart = UARTdump()
    uart.start()

    # specify ISI box channels to test
    channels = [0, 20, 40, 60, 80, 100]
    # specify number of runs per channel
    runs = 20

    init_script = script_path + '\\' + script_name
    # reset DUT and run an init script
    cap('rpt2', 'cmd', 'RPT DUT RESET')
    cap('rpt2', 'cmd', 'RPT SCRIPT RUN ' + init_script)

    init_channel() # init the ISI box
    on('PT_EN_LANE') # phy_test is enabled for then entire regression
    # ensure that the PHY test pattern is PRBS-31
    write('PT_TX_PATTERN_SEL_LANE[5:0]', 0x1A)
    write('PT_RX_PATTERN_SEL_LANE[5:0]', 0x1A)
    
    # BER will hold the measured BER for each run
    BER = [[0 for x in range(runs)] for y in range(len(channels))]
    # FAIL will be 1 if the test does not pass the regression criteria
    FAIL = [[0 for x in range(runs)] for y in range(len(channels))]

    for i in range(len(channels)):
        channel(channels[i]) # change ISI box to current channel
        ber_total = 0;
        fail = 0;

        for x in range(0, runs):
            # write a unique runcode to the debugdump file (so we can uniquely
            # identify them later)
            runcode = 'runcode:%d.%d' % (i, x)
            uart.write(runcode)

            # START: TRX Train
            on('tx_train_enable_lane')
            train_timeout = 20
            while(read('train_done_lane') == 0 and train_timeout > 0):
                time.sleep(1)
                train_timeout -= 1;
            time.sleep(1)
            off('tx_train_enable_lane')
            # END: TRX Train

            if (train_timeout == 0):
                print "Training timed out!!!"
                fail += 1;
                FAIL[i][x] = 1
                BER[i][x] = -1
                time.sleep(5)
                continue

            time.sleep(1) # wait 1 second after train to settle everything

            if (not(read('PT_LOCK_LANE'))):
                print "Pattern cannot lock!!!"
                fail += 1;
                FAIL[i][x] = 1
                BER[i][x] = -1
                continue

            print("Measuring BER...")
            ber_time = 20; # count errors for ber_time seconds

            # START: measure BER
            toggle('PT_CNT_RST_LANE')
            time.sleep(ber_time)

            on('pt_cnt_pause_lane')
            error_count = read('PT_ERR_CNT_LANE[31:0]')
            error_count += read('PT_ERR_CNT_LANE[47:32]') << 32
            symbol_count = read('PT_CNT_LANE[31:0]')
            symbol_count += read('PT_CNT_LANE[47:32]') << 32
            symbol_count *= 80
            off('pt_cnt_pause_lane')
            # END: measure BER

            measured_ber = float(error_count) / symbol_count
            ber_calc_results = (measured_ber, error_count, symbol_count)
            print "BER = (%.3e, (%d / %d)" % ber_calc_results
            ber_total += measured_ber
            if measured_ber > 1e-4:
                print "BER failed threshold!"
                fail += 1
                FAIL[i][x] = 1
            print fail, "failures /", x+1, "runs"
            print "Average BER =", ber_total / (x + 1)
            BER[i][x] = measured_ber
        average_ber = ber_total / (runs)
        print "Overall Average BER =", average_ber
        print fail, "failures /", runs, "runs"
    write_to_file([channels, BER, FAIL]) # write results.json
    summary() # print out a summary in stdout (uses the results.json file)
    uart.close()

if __name__ == "__main__":
    main()

