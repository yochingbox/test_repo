#!/bin/python2

from numpy import log10, log2, zeros
from math import floor
import matplotlib.pyplot as plt

# function approximation -10*log10(x/65536) 0<x<65535
# input:  mse U16.16
# output: snr U11.5 if frac_bits=5
# DSP spec appendix A
def snr_approx(mse, frac_bits):
    # frac_bits = 5
    frac_pw = 2**frac_bits
    if mse <= 16: # limit higher snr
        snr = 36 * frac_pw
    elif mse >= 16384: # limit smaller snr
        snr = 6 * frac_pw
    else:
        m = floor(log2(mse)) # closer power of 2 less than number - typically provided as MSB in integeter in MCU
        if mse < 2**(m) + 2**(m-1):   
            # linear interpolator between 2^m and 1.5*2^m
            snr = ((12*(16-m)-7)*(mse-2**m) + 12*(16-m)*(2**m+2.**(m-1)-mse)+2**(m-frac_bits))/2**(m+1-frac_bits)
        else:
            # linear interpolator between 1.5*2^m and 2*2^m
            snr = (12*(16-m-1)*(mse-2**m-2**(m-1)) + (12*(16-m)-7)*(2**(m+1)-mse)+2**(m-frac_bits))/2**(m+1-frac_bits)
        # fixed point number - automatic by previous operation in C fixed point
        snr = floor(snr)
    return snr


def main():
    """
    MAIN function, this runs automatically when snr_approx.py is invoked
    """
    x = [17, 32, 3456, 7513, 12349, 15239]
    frac_bits = 5
    y_exact = zeros(len(x))
    y_approx = zeros(len(x))

    for i in range(len(x)):
        val = x[i]
        y_exact[i] = round(-10*log10(val*1.0/65536) * 2**frac_bits)
        y_approx[i] = snr_approx(val, frac_bits)
        print("val = " + str(val) + " exact = " + str(y_exact[i]) + " approx = " + str(y_approx[i])  + " delta = " + str(y_exact[i]-y_approx[i]))

    plt.plot(x,y_exact,x,y_approx,'ro')
    plt.legend(('exact','approx'))
    plt.show()

if __name__ == "__main__":
    main()
