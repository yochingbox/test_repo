import time
import sys

## CAP2 FUNCTIONS ##
## add CAP2 Python source location
sys.path.insert(0, 'C:\Marvell\CAP2\BIN')
sys.path.insert(0, 'C:\Marvell\CAP2\Python')
from cap import cap

lane_default = 7
#isi_box_port = 'COM14'
uart_port = 'COM5'
script_path = r'C:\Marvell\PHY\PHY_Init\7NM_COMPHY_112G_X4_ADC_R1P0\TBD' # TBD
script_name = r'TBD.txt' #TBD
timestr = time.strftime("%Y%m%d-%H%M%S") # appended to filenames
board = 'MBSN=64'

def readReg(lane, nameStr, convStr, brd = board):
    """ read a register from cap """
    # suppress stdout for cap which by default displays the register name and
    # read-back
    #save_stdout = sys.stdout
    #sys.stdout = io.BytesIO()
    x = cap('rpt2','readfield',lane,nameStr, convStr)['Raptor2']['formatted']
    #sys.stdout = save_stdout
    return x

def writeReg(lane, nameStr, value, brd = board):
    """ write a register from cap """
    cap('rpt2','writefield',lane,nameStr, value, brd)
    print('board',brd)

def toggle(reg_name, lane = lane_default):
    """ send a pulse to a 1-bit register 0-->1-->0 """
    writeReg(lane, reg_name, 0)
    time.sleep(0.1)
    writeReg(lane, reg_name, 1)
    time.sleep(0.1)
    writeReg(lane, reg_name, 0)
    time.sleep(0.1)

def on(reg_name, lane = lane_default, brd = board):
    """ enable a 1-bit register """
    writeReg(lane, reg_name, 1, brd)
    time.sleep(0.1)

def off(reg_name, lane = lane_default, brd = board):
    """ disable a 1-bit register """
    writeReg(lane, reg_name, 0, brd)
    time.sleep(0.1)

def read(reg_name, lane = lane_default):
    """ wrapper for readReg """
    return readReg(lane, reg_name, 'd')

def write(reg_name, value, lane = lane_default, brd = board):
    """ wrapper for writeReg """
    writeReg(lane, reg_name, value, brd)

# phyInit ...
