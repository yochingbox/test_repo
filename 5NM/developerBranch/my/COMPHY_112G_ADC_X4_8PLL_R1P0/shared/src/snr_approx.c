#include "common.h"

// function approximation -10*log10(x/65536) 0<x<65535
// DSP spec appendix A
// input:  mse U16.16
// output: snr U11.5
#define FRAC_BITS 5

uint16_t snr_approx(uint16_t mse) {
		uint16_t snr = 0;
		uint8_t m = 0;
		uint16_t mse_temp;

    if (mse <= 16) // limit higher snr
        snr = 36 << FRAC_BITS;
		else if (mse >= (1<<14)) // limit smaller snr
        snr = 6 << FRAC_BITS;
    else  {
				mse_temp = mse;	
				// closer power of 2 less than number - typically provided as MSB in integeter in MCU
        while((reg_MCU_DEBUGA_LANE_7_0=0x89)&&(mse_temp >>= 1)) m++;
        if (mse < ((1<<m) + (1<<(m-1))) ){
            // linear interpolator between 2^m and 1.5*2^m
            snr += (12*(16-m)-7)*(mse-(1<<m));
						snr += 12*(16-m)*((1<<m)+(1<<(m-1))-mse);
						snr += 1<<(m-FRAC_BITS);
						snr >>= m+1-FRAC_BITS;
				}
        else {
            // linear interpolator between 1.5*2^m and 2*2^m
            snr += 12*(16-m-1)*(mse-(1<<m)-(1<<(m-1)));
						snr	+= (12*(16-m)-7)*((1<<(m+1))-mse);
						snr += 1<<(m-FRAC_BITS);
						snr >>=	m+1-FRAC_BITS;
				}
        // fixed point number - automatic by previous operation in C fixed point
		}
    return snr;
}
