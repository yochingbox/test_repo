#!/usr/bin/env python2

import time

reg_verbose = True
total_time_us = 0
reg_rw_time = 0.1 #us

def read(reg_name):
    """ dummy function for readReg """
    global reg_verbose, total_time_us, reg_rw_time
    value = 1
    if reg_verbose:
        print(reg_name + ' -> ' + str(value))
    total_time_us = total_time_us + reg_rw_time
    return 1

def write(reg_name, value):
    """ dummy function for writeReg """
    global reg_verbose, total_time_us, reg_rw_time
    if reg_verbose:
        print(reg_name + ' <- ' + str(value))
    total_time_us = total_time_us + reg_rw_time

def wait(timer_us):
    global reg_verbose, total_time_us
    if timer_us < 1:
        wait_time = 0.01
    else:
        wait_time = timer_us/1000.0
    time.sleep(wait_time)
    total_time_us = total_time_us + wait_time*1000

def while_wait(reg_name, timeout_us, timer_step_us=1):
    while(read(reg_name) == 0 and timeout_us > 0):
        wait(timer_step_us)
        timeout_us -= timer_step_us
    return timeout_us
    
def reset_time():
    global total_time_us
    total_time_us = 0

def get_time():
    global total_time_us
    return total_time_us

def mat_init():
    # empty
    print 

def mat_run():
    #empty
    print

def mat_set_lp(num_set):
    #empty
    print

def mat_set_hp(num_set):
    #empty
    print

def mat_TXFFE_incdec(dir_list):
    #empty
    print
    return 1,0,0

def mat_TXFFE_preset(num_preset):
    #empty 
    print
    return
