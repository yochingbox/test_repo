#!/bin/python2

"""
DV test-bench

copy and modify for your specific use
"""

import unittest
from adc_train import *
import argparse
parser = argparse.ArgumentParser()
parser.add_argument('--seed', type=int,
                    help='The model seed', default=0)
parser.add_argument('--chnl_idx', type=int,
                    help='The channel index', default=0)
parser.add_argument('--tx_amp', type=float,
                    help='The TX differential pk-pk amplitude', default=1.0)
parser.add_argument('--test_case', type=int,
                    help='The test-case', default=1)

class DvTestBench(unittest.TestCase):

    def init_mat(self):
        args = parser.parse_args()
        print("Argument values:")
        print("seed = " + str(args.seed))
        print("chnl_idx = " + str(args.chnl_idx))
        print("tx_amp = " + str(args.tx_amp))
        mat_init(args.seed, args.chnl_idx, args.tx_amp)
        
    def test_init_sat_check(self):
        self.init_mat()
        # module arguments
        adc_sat_check_small_sig_th = 64
        adc_sat_check_th1 = 48
        adc_sat_check_large_sig_th = 32
        adc_sat_check_th2 = 16
        print("test_case = " + tests[args.test_case])
        print("rx_train_adc_sat_check_small_sig_th = " + str(adc_sat_check_small_sig_th))
        print("rx_train_adc_sat_check_th1 = " + str(adc_sat_check_th1))
        print("rx_train_adc_sat_check_large_sig_th = " + str(adc_sat_check_large_sig_th))
        print("rx_train_adc_sat_check_th2 = " + str(adc_sat_check_th2))
        init_adc_sat_check(rx_train_adc_sat_check_small_sig_th = adc_sat_check_small_sig_th,rx_train_adc_sat_check_th1 = adc_sat_check_th1,
                       rx_train_adc_sat_check_large_sig_th = adc_sat_check_large_sig_th, rx_train_adc_sat_check_th2 = adc_sat_check_th2)

    def test_rx_blind_train(self):
        self.init_mat()
        set_ctle(R=1, C=30, gain_coarse=4)
        max_trial = 10
        adc_sat_th = 655
        adc_th1 = 60  
        c_step = 1
        r_step = 1
        gain_coarse_step = 1
        print("test_case = " + tests[args.test_case])
        print("rx_train_blind_max_trial = " + str(max_trial))
        print("rx_train_blind_adc_sat_th = " + str(adc_sat_th))
        print("rx_train_blind_adc_th1 = " + str(adc_th1))
        print("rx_train_blind_ctle_c_step = " + str(c_step))
        print("rx_train_blind_r_step = " + str(r_step))
        print("rx_train_blind_gain_coarse_step = " + str(gain_coarse_step))
        rx_blind_train(rx_train_blind_max_trial = max_trial, rx_train_blind_adc_sat_th = adc_sat_th, rx_train_blind_adc_th1 = adc_th1,  
                       rx_train_blind_ctle_c_step = c_step, rx_train_blind_r_step = r_step, rx_train_blind_gain_coarse_step = gain_coarse_step)
    
    def test_trx_train_txffe_det_preset(self):
        self.init_mat()
        set_ctle(R=1, C=30, gain_coarse=4)
        print("test_case = " + tests[args.test_case])
        preset_num = trx_train_txffe_det_preset()
        print("preset_num = " + str(preset_num))

    def test_trx_train_txffe_set_preset(self):
        self.init_mat()
        set_ctle(R=1, C=30, gain_coarse=4)
        ctle_comp_en = 0
        ctle_comp_iter_max = 3
        ctle_comp_r_step = 1
        preset_idx = 1
        print("test_case = " + tests[args.test_case])
        print("tx_train_preset_ctle_comp_en = " + str(ctle_comp_en))
        print("tx_train_preset_ctle_comp_iter_max = " + str(ctle_comp_iter_max))
        print("tx_train_preset_ctle_comp_r_step = " + str(ctle_comp_r_step))
        print("preset_num = " + str(preset_idx))
        trx_train_txffe_set_preset(tx_train_preset_ctle_comp_en = ctle_comp_en, tx_train_preset_ctle_comp_iter_max = ctle_comp_iter_max, 
                                    tx_train_preset_ctle_comp_r_step = ctle_comp_r_step, preset_num = preset_idx )

    def test_ctle_grid_search(self):
        self.init_mat()
        set_ctle(R=1, C=30, gain_coarse=4)
        R_iter_max = 2
        C_iter_max = 4
        R_step = 1
        C_step = 3
        adc_sat_th = 7
        adc_th1 = 60
        snr_th = 0
        print("test_case = " + tests[args.test_case])
        print("rx_train_opt_R_iter_max = " + str(R_iter_max))
        print("rx_train_opt_C_iter_max = " + str(C_iter_max))
        print("rx_train_opt_R_step = " + str(R_step))
        print("rx_train_opt_C_step = " + str(C_step))
        print("rx_train_opt_adc_sat_th = " + str(adc_sat_th))
        print("rx_train_opt_adc_th1 = " + str(adc_th1))
        print("rx_train_opt_snr_th = " + str(snr_th))
        ctle_grid_search(rx_train_opt_R_iter_max = R_iter_max, rx_train_opt_C_iter_max = C_iter_max, rx_train_opt_R_step = R_step, 
                         rx_train_opt_C_step = C_step, rx_train_opt_adc_sat_th = adc_sat_th, rx_train_opt_adc_th1 = adc_th1, 
                         rx_train_opt_snr_th = snr_th)

    def test_txffe_gradient_base_train(self):
        self.init_mat()
        set_ctle(R=1, C=30, gain_coarse=4)
        set_TXFFE_preset(num_preset = 1)
        ext_iter_max = 1
        int_iter_max = 2
        adapt_dir = [1,1,0,1]
        gradient_pre = [-1,-1,-1,-1]
        snr_th = 0
        adc_sat_th = 7
        adc_th1 = 60
        print("test_case = " + tests[args.test_case])
        print("tx_train_opt_ext_iter_max = " + str(ext_iter_max))
        print("tx_train_opt_int_iter_max = " + str(int_iter_max))
        print("tx_train_opt_adapt_dir = " + str(adapt_dir))
        print("gradient = " + str(gradient_pre))
        print("tx_train_opt_snr_th = " + str(snr_th))
        print("tx_train_opt_adc_sat_th = " + str(adc_sat_th))
        print("tx_train_opt_adc_th1 = " + str(adc_th1))
        gradient_pst, txffe_updated = txffe_gradient_base_train(tx_train_opt_ext_iter_max = ext_iter_max, tx_train_opt_int_iter_max = int_iter_max, 
                                      tx_train_opt_adapt_dir = adapt_dir , gradient = gradient_pre, tx_train_opt_snr_th = snr_th, 
                                      tx_train_opt_adc_sat_th = adc_sat_th, tx_train_opt_adc_th1 = adc_th1)
        print("gradient_pst = " + str(gradient_pst))
        print("txffe_updated = " + str(txffe_updated))

    def test_trx_opt(self):
        self.init_mat()
        set_ctle(R=1, C=30, gain_coarse=4)
        set_TXFFE_preset(num_preset = 1)
        iter_min = 2
        iter_max = 10
        tx_train_enable = 1
        grid_inc_en = 0
        CTLE_R_inc = 1
        CTLE_C_inc = 2
        print("test_case = " + tests[args.test_case])
        print("trx_train_iter_min = " + str(iter_min))
        print("trx_train_iter_max = " + str(iter_max))
        print("trx_train_tx_train_enable = " + str(tx_train_enable))
        print("trx_train_CTLE_grid_inc_en = " + str(grid_inc_en))
        print("trx_train_CTLE_R_inc = " + str(CTLE_R_inc))
        print("trx_train_CTLE_C_inc = " + str(CTLE_C_inc))
        trx_opt(trx_train_iter_min = iter_min, trx_train_iter_max = iter_max, trx_train_tx_train_enable = tx_train_enable, 
            trx_train_CTLE_grid_inc_en = grid_inc_en, trx_train_CTLE_R_inc = CTLE_R_inc,trx_train_CTLE_C_inc = CTLE_C_inc)
    
    def test_set_TXFFE_tap(self):
        self.init_mat()
        set_ctle(R=1, C=30, gain_coarse=4)
        set_TXFFE_preset(num_preset = 1)
        tap_idx = 2
        tx_ffe_dir = 1
        p2pfix_en = 1
        print("test_case = " + tests[args.test_case])
        print("tap = " + str(tap_idx))
        print("tx_dir = " + str(tx_ffe_dir))
        print("p2pfix = " + str(p2pfix_en))
        update_flag, max_flag, min_flag = set_TXFFE_tap(tap = tap_idx, tx_dir = tx_ffe_dir, p2pfix = p2pfix_en)
        print("update_flag = " + str(update_flag))
        print("max_flag = " + str(max_flag))
        print("min_flag = " + str(min_flag))

if __name__ == "__main__":
        #unittest.main()
        args = parser.parse_args()
        tests = ['test_init_sat_check', 'test_rx_blind_train', 'test_trx_train_txffe_det_preset',
                 'test_trx_train_txffe_set_preset', 'test_ctle_grid_search', 'test_txffe_gradient_base_train',
                 'test_trx_opt', 'test_set_TXFFE_tap']
        suite = unittest.TestSuite()
        result = unittest.TestResult()
        suite.addTest(DvTestBench(tests[args.test_case]))
        suite.run(result)


