# unit test : snr_approx.c

import sys
import numpy as np
import matplotlib.pyplot as plt
import ctypes

sys.path.insert(0, '../tools')

from hw_drivers import snr_approx

# load  C library
lib=ctypes.CDLL('fwtest.so',mode=ctypes.RTLD_GLOBAL)
lib.snr_approx.argtypes = [ctypes.c_uint]
lib.snr_approx.restype = ctypes.c_uint

mse_list = np.linspace(0, 0.25, 100)
snr_out = []
snr_fw_out = []
snr_diff = []
for mse in mse_list:
	mse_in = int(round(mse * 2**16))
	# python
	snr = snr_approx(mse_in) / 2**5
	snr_out.append(snr)
	# c code
	snr_fw = lib.snr_approx(mse_in) / 2.0**5
	snr_fw_out.append(snr_fw)
	snr_diff.append(snr - snr_fw)
plt.plot(mse_list,snr_out, label='Reference')
plt.plot(mse_list,snr_fw_out,'o', label='FW', markerfacecolor='none')
plt.plot(mse_list,snr_diff, label='Diff')
plt.ylim(-1,40)
plt.legend()
plt.title('Firmware vs. Reference (SNR Approx)')
plt.xlabel('MSE')
plt.ylabel('SNR')
plt.show()





