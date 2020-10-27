% ctle controls [CS1 CS2 CL1 Cinnet RS1 RS2 RCOARSE]
ctle=[31     21     0     0     0     0     0];
txffe=[0.0 -0.2 0.8 0.0];
sat_level = [60 20];
guess_sampling_location = 1; % experimental, not exact
plot_en = 1;

[mse, sat, ffe, dfe, gain, ffe_dtl, gain_dtl, pwr_hlp, chnl_step, ctle_impulse] = simpleDataPathModel(ctle, txffe, sat_level,0,1,guess_sampling_location,plot_en);




%%
fs = 53.125e9*16;
f = logspace(7,11,100);
Hchnl = 20*log10(abs(freqz(diff(chnl_step),1,f,fs)));
Hctle = 20*log10(abs(freqz(ctle_impulse,1,f,fs)));
%fvtool(ctle_impulse,1,ctle_impulse,1,'Fs',53.125e9*16)

figure;
semilogx(f*1e-9,Hchnl,f*1e-9,Hctle)
xlabel('Frequency (GHz)');
ylabel('Magnitude (dB)');
grid on;