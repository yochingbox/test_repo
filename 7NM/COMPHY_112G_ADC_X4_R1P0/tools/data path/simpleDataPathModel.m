%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%   Simple Time Domain for Data path in baud-rate domain
% 
%                    v0.1  Jul 9, 2019
%                   dvisani@marvell.com
%
%   Input: 
%           ctle configuration vector [CS1, CS2, CL1, Cinnet, RS1, RS2, RCOARSE]
%           txffe taps vector (normalize pk-pk)
%           saturation level for saturation output
%           variable argument: 1st MM DTL guess, 2st plot-enable
%           
%   Output: plots and mse, saturation, FFE, DFE, GAIN, FFE-DTL, GAIN-DTL
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function [mse, sat, ffe, dfe, gain, ffe_dtl, gain_dtl, pwr_hlp, chnl_step, ctle_impulse] = simpleDataPathModel(ctle, txffe, sat_level,chnl_id,tx_ampl,varargin)
%rng(454)
% Read in results file
%filename = 'pulse_eg_osr_64.txt';%'channel_step_osr_32.txt';
%param.OS = 64; % oversampling of channel response file
%param.chnl_step = importdata(filename)'; % reads in param and absolute_optimum
%chnl_pulse1 = importdata(filename)'; % reads channel pulse

if isempty(varargin)
    plot_en = 0;
    guess_DTL = 1;
else
    guess_DTL = varargin{1};
    if length(varargin)>1
        plot_en = varargin{2};
    else
        plot_en = 0;
    end
end

train_struct.CS1 = ctle(1);
train_struct.CS2 = ctle(2);
train_struct.CL1 = ctle(3);
train_struct.Cinnet = ctle(4);
train_struct.RS1 = ctle(5);
train_struct.RS2 = ctle(6);
train_struct.RCOARSE = ctle(7);
param.TXffe = txffe;

% channel file
chnl_list{1} =  'BP_2conn_85ohm_30dB_Nom_thru_FS56G_OSR16_StepResp.txt';
chnl_list{2} =  'Ch5_22_5F3N_t_FS56G_OSR16_StepResp.txt';
chnl_list{3} =  'CAd2d__2p0m_awg28_m_BC-BOR_N_N_N_THRU_FS56G_OSR16_StepResp.txt';
chnl_list{4} =  '40inPair_112GpackageTxRx_28G_X16_StepResp.txt';
chnl_list{5} =  'B56_Thru_CblBP_FS56G_OSR16_StepResp.txt';

%'.txt';;%'.txt'%'THRU_Host_Tx6_Mod_Tx6_OIF_Long_Barrel_FS56G_OSR16_StepResp.txt';% 
filename = chnl_list{chnl_id+1};
param.Fs = 53.125e9;%26.5625e9;
param.OS = 16; % oversampling of channel response file
%param.chnl_step = importdata(filename)'; % reads in param and absolute_optimum
chnl_step = importdata(filename); % reads channel pulse
chnl_pulse = filter(ones(param.OS,1),1,[0; diff(chnl_step)]);

% Model parameters
param.project = 'comphy112gADC';
param.ts = 31+1;  % sampling position - between 1 and param.OS - C and RTL starts from 0!
param.Fullscale = 0.2; % ADC Full-Scale (zero-peak)
param.ENOB = 5.7; % ADC effective number of bits
param.noise_rms = 1e-3; % noise at input of ADC which is not ENOB
param.coef_noise_std = 1/64;
param.PAM4 = 1; % 1: PAM4, 0: PAM2
param.TXamp = tx_ampl; % differential pk-pk
%param.TXffe = [0.0 1.0 0.0]; % sum(abs()) should make 1.0
param.DP = 1; % 1: data-path, 0: clock-path

% Data path filter coefficients
% param.FFE = 1.0;%[2 -6 14 -33 64 29 -21 -7 -1 -2 1 1 -1] / 2^6;
% param.GAIN = 486 / 2^6;
% param.DFE = 0; %18 / 2^5;

%chnl_pulse = ;
%ctle_pulse = ctle_simple(53.125e9,param.OS);
%comb_pulse = conv(ctle_112g_pulse, chnl_pulse);
%[~, q] = max(abs(comb_pulse));
%param.ts = mod(q,param.OS);

ctle_impulse = ctle_112g_pulse(param.Fs,param.OS,train_struct);
chnl_pulse = filter(ctle_impulse,1,chnl_pulse);
[~, q] = max(abs(chnl_pulse));
chnl_pulse = [chnl_pulse; zeros(param.OS-mod(length(chnl_pulse),param.OS),1)];
param.ts = mod(q,param.OS)+1;
chnl_pulse = reshape(chnl_pulse,param.OS,[]);

% use ctle model
if guess_DTL==1
    chnl_impulse = chnl_pulse(param.ts,:); 
    param_DTL = param;
    param_DTL.DP = 0;
    param_DTL.FFE = simpleLmsTapsCalc(chnl_impulse,param_DTL,0);
    %chnl_pulse = ctle_simple(56.25e9,param.OS);
    
    % search for sampling position
    %param_DTL = param;
    %param_DTL.DP = 0;
    param_DTL.MM = +inf;
    % do not adapt DTL-FFE - set saturation levels to 0.0
    param_DTL.FFEforce = 1; %param_DTL.FFE = [0 0 0 32 0 0 0]/2^5;
    
    MM= zeros(1,param_DTL.OS);
    for i = 1:param_DTL.OS
        chnl_impulse = chnl_pulse(i,:);
        [FFE_DTL GAIN_DTL DFE_DTL MM(i)] = simpleLmsTapsCalc(chnl_impulse,param_DTL,0);

        % find zero crossing of TED with positive slope
        if ( (i > 1) && (MM(i-1) < 0) && ( MM(i) >=0 ) )
          param_DTL.MM = MM(i);
          param_DTL.FFE = FFE_DTL;
          param_DTL.GAIN = GAIN_DTL;
          param_DTL.DFE = DFE_DTL; % expected to be empty
          param_DTL.ts =i;
        end
    end
    % find zero crossing of TED with positive slope on 1st sampling position
    if ( (MM(param_DTL.OS) < 0) && ( MM(1) >=0 ) )
      param_DTL.MM = MM(1);
      param_DTL.FFE = FFE_DTL;
      param_DTL.GAIN = GAIN_DTL;
      param_DTL.DFE = DFE_DTL; % expected to be empty
      param_DTL.ts =1;
    end
    param.ts = param_DTL.ts;
    
    pulse = reshape(chnl_pulse,[],1);
    
    if (plot_en == 1)
        figure;
        subplot(2, 1, 1)
        plot((0:length(pulse)-1)/param.OS,pulse)
        title('Pulse response')
        xlabel('Time (UI)')
        ylabel('Pulse response')
        grid on

        [~, q] = max(abs(pulse(param.ts:param.OS:end)));

        hold on;  plot((param.ts-1+param.OS*(q-1))/param.OS,pulse(param.ts+param.OS*(q-1)),'o','markerSize',7,'markerFaceColor','r'); hold off;
        str_text        = sprintf('Sampling time = %1.2fUI; MM-detector = %1.2e', (param.ts-1)/param.OS, param_DTL.MM);
        ax              = axis;
        xdel            = (ax(2)-ax(1))/40;
        xloc            = ax(1) + xdel;
        ydel            = (ax(4)-ax(3))/30;
        yloc            = ax(3) + ydel*1;
        text(xloc, yloc, str_text, 'color', 'r', 'fontsize', 9, 'fontweight', 'bold');
        fprintf(1,'%s\n', str_text);

        % pulse including FFE-DTL
        pulse = filter(kron(param_DTL.FFE',[1; zeros(param.OS-1,1)]),1,pulse);    
        subplot(2, 1, 2)
        plot((0:length(pulse)-1)/param.OS,pulse)
        title('Pulse response including FFE-DTL')
        xlabel('Time (UI)')
        ylabel('Pulse response')
        grid on

        [~, q] = max(abs(pulse(param.ts:param.OS:end)));

        hold on;  plot((param.ts-1+param.OS*(q-1))/param.OS,pulse(param.ts+param.OS*(q-1)),'o','markerSize',7,'markerFaceColor','r'); hold off;
        str_text        = sprintf('Sampling time = %1.2fUI; MM-detector = %1.2e', (param.ts-1)/param.OS, param_DTL.MM);
        ax              = axis;
        xdel            = (ax(2)-ax(1))/40;
        xloc            = ax(1) + xdel;
        ydel            = (ax(4)-ax(3))/30;
        yloc            = ax(3) + ydel*1;
        text(xloc, yloc, str_text, 'color', 'r', 'fontsize', 9, 'fontweight', 'bold');

        figure;
        subplot(2,1,1)
        plot((0:param_DTL.OS-1)/param.OS,MM,'o')
        xlabel('Sampling position (UI)')
        ylabel('MM TED')
        grid on

        subplot(2,1,2)
        plot((0:param_DTL.OS-1)/param.OS,[0 diff(MM)],'o')
        xlabel('Sampling position (UI)')
        ylabel('MM TED gain')
        grid on
    end
   
end

%%
% Get the optimal impulse response @CTLE output at Baud rate
% generate the pulse response from the step response
chnl_impulse = chnl_pulse(param.ts,:); % MATLAB index start from 1 instead that 0
[~, q] = max(abs(chnl_impulse));
%chnl_impulse([1:q-1 q+1:end]) = 0; % select cursor and some other ISI

% get optimal taps
[param.FFE param.GAIN param.DFE] = simpleLmsTapsCalc(chnl_impulse,param,0);

% Simulation settings
mse_len=4;
sim.SNRwindow = 2^(8+mse_len+6); % SNR block size
sim.numSymbols = max(2^16,sim.SNRwindow*4);%2^23; % simulation length


% Generate transmitted symbols output pattern
if (param.PAM4 == 1)
    sim.symbols = 2/3*(round(3*rand([1 sim.numSymbols]))-1.5); % symbols, {-1, -1/3, 1/3, +1};
else
    sim.symbols = 2*(round(rand([1 sim.numSymbols]))-0.5); % symbols, {-1, +1};
end

% overwrite symbols and FFE, DFE, GAIN values
if 0
    param.FFE = [0 64 0]/64;
    param.DFE = 0/32;
    param.GAIN = 187/64;
    sim.symbols = ones([1 sim.numSymbols])/3;
end

sim.TXout = param.TXamp/2 * conv(sim.symbols,param.TXffe);

% Generate the input waveform
sim.CTLEoutput = conv(sim.TXout, chnl_impulse);

% quantization is 7 bit, but ENOB is different....
quant_lin = 10^(-(7*6.02+1.76)/10);
total_lin = 10^(-(param.ENOB*6.02+1.76)/10);

thermal_lin = total_lin-quant_lin; % required extra noise to match ENOB

sim.noise = sqrt(param.noise_rms^2 + param.Fullscale^2/2*thermal_lin) * randn(size(sim.CTLEoutput));

sim.ADC_in = sim.CTLEoutput + sim.noise;

% now quantize
% ADC output is kept 
sim.ADC_out_int = round(sim.ADC_in/param.Fullscale*2^(7-1));

% saturate
indices = find(sim.ADC_out_int > 2^(7-1)-1);
sim.ADC_out_int(indices) = 2^(7-1)-1;

indices = find(sim.ADC_out_int < -2^(7-1));
sim.ADC_out_int(indices) = -2^(7-1);

% fixed point representation of ADC output to data path
sim.ADC_out = sim.ADC_out_int / 2^(7-1);

% Filter with FFE
sim.FFE_out = conv(param.FFE, sim.ADC_out);

% and apply gain to normalize to levels {-3, -1, 1, 3}
sim.GAIN_out = sim.FFE_out * param.GAIN;

% Finally, apply DFE and compute slicer input and decide
sim.decisions = zeros([numel(sim.GAIN_out)+1 1]);
sim.slicer_in = sim.decisions;

decisions(1) = 1; % arbitrary first decision

for k = 2:numel(sim.GAIN_out)
    % Slicer input
    if (isempty(param.DFE))
        sim.slicer_in(k) = sim.GAIN_out(k);
    else
        sim.slicer_in(k) = sim.GAIN_out(k) - param.DFE*sim.decisions(k-1);
    end
    
    % Slicer
    if (sim.slicer_in(k) > 2)
        sim.decisions(k) = 3;
    else
        if (sim.slicer_in(k) > 0)
            sim.decisions(k) = 1;
        else
            if (sim.slicer_in(k) > -2)
                sim.decisions(k) = -1;
            else
                sim.decisions(k) = -3;
            end
        end
    end
    
end  % for k

% error at the input of the slicer
sim.error = sim.slicer_in - sim.decisions;

% Compute SNR every sim.SNRwindow points
num_win = floor(numel(sim.error)/sim.SNRwindow) * sim.SNRwindow;

squared_error = sim.error(1:num_win).^2;
squared_error_win = reshape(squared_error, sim.SNRwindow, []);

sum_squared_error_win = mean(squared_error_win);

SNR = -10*log10(sum_squared_error_win);


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Generate plots

% channel model
if (plot_en == 1)
    figure
    subplot(3, 1, 1)
    plot(sim.TXout,'o')
    ylabel('V')
    grid on
    title('Tx output');

    subplot(3, 1, 2)
    plot(chnl_impulse)
    grid on
    title('channel impulse response');

    subplot(3, 1, 3)
    plot(sim.CTLEoutput,'.')
    grid on
    title('ADC input');

    % Rx eq model
    figure
    subplot(3, 1, 1)
    plot(sim.ADC_out,'.')
    grid on
    title('ADC output');

    subplot(3, 1, 2)
    plot(sim.FFE_out,'.')
    grid on
    title('FFE output');

    subplot(3, 1, 3)
    plot(sim.slicer_in,'.')
    grid on
    title('Slicer input');

    % performance model
    figure
    subplot(2, 1, 1);
    plot(sim.error);
    grid on
    title('Error at the slicer');

    subplot(2, 1, 2);
    plot(sim.decisions, '.');
    grid on
    title('decisions');



    figure
    plot(SNR, 'r');
    grid on
    title(sprintf('SNR over %d sample windows', sim.SNRwindow));
end

% print sampling position
fprintf('Sampling position index [0:63] %g\n', param.ts-1);

% print DTL coefficients

% channel_impulse
[~, q] = max(abs(chnl_impulse));
fprintf('channel response [-4:+4]\n[');
fprintf('%g  ', chnl_impulse(q-4:q+4)*param.TXamp/2/param.Fullscale);
fprintf(']\n');

if (exist('param_DTL','var'))
    fprintf('FFE-DTL Coefficients \n[');
    fprintf('%d  ', 2^5 * param_DTL.FFE);
    fprintf(']\n');
    fprintf('GAIN-DTL %g\n', param_DTL.GAIN * 2^5);
    fprintf('BLW-DTL %g\n', round(((1*1/64*sum(param_DTL.FFE)+1/64)*param_DTL.GAIN+1/32)*32));
end

% print coefficients

fprintf('FFE Coefficients \n[');
fprintf('%d  ', 2^6 * param.FFE);
fprintf(']\n');
fprintf('GAIN %g\n', param.GAIN * 2^6);
fprintf('BLW %g\n', round(((1*1/128*sum(param.FFE)+1/128)*param.GAIN+1/64)*64));
fprintf('DFE Coefficient: %g (%d)\n', param.DFE, param.DFE*2^5);

% MSE
MSE_ave = mean(sum_squared_error_win(end));
fprintf('MSE (SNR) %d (%1.2fdB)\n', round(MSE_ave*2^16), -10*log10(MSE_ave));

mse = round(MSE_ave*2^16);
sat = [mean(abs(sim.ADC_out_int)) ...
    length(nonzeros(abs(sim.ADC_out_int)> sat_level(1)))/length(sim.CTLEoutput) ...
    length(nonzeros(abs(sim.ADC_out_int)> sat_level(2)))/length(sim.CTLEoutput) ...
     mean(sim.ADC_out_int) ...
    length(nonzeros(sim.ADC_out_int> sat_level(1)))/length(sim.CTLEoutput) ...
    length(nonzeros(sim.ADC_out_int> sat_level(2)))/length(sim.CTLEoutput) ];
ffe = 2^6 * param.FFE;
dfe = param.DFE*2^5;
gain = param.GAIN * 2^6;

param_DTL = param;
param_DTL.DP = 0;
param_DTL.coef_noise_std = param.coef_noise_std*2; %1/32;
[param_DTL.FFE param_DTL.GAIN ] = simpleLmsTapsCalc(chnl_impulse,param_DTL,0);
ffe_dtl = 2^5 * param_DTL.FFE;
gain_dtl = param_DTL.GAIN * 2^5;

%%

ffe_hlp = [0,-56,64,16,-6,-10,-7,-3,0,1,1,0,0; ... %hp0
    15,-49,64,-51,31,-14,3,2,-3,3,-2,1,0; ...      %hp1
    -15,-21,64,-21,-25,10,0,8,-3,0,-3,1,2; ...     %bp
    15,58,64,38,13,0,-4,-4,-2,0,0,0,0; ...         %lp0
    15,48,64,53,31,15,6,-1,-3,-3,-2,-1,-1;...
    15,50,64,37,4,-14,-7,3,3,3,-3,-2,-2;
    ];        %lp1
gain_hlp = [340; 196; 280; 196; 196; 196];                %hp0;hp1;lp0;lp1

% [16,50,64,37,4,-14,-8,3,8,3,-4,-4,-4] 196 lowpass 10 GHz
% [-16,-21,64,-21,-25,10,0,8,-4,0,-4,3,3] 280 bandpass 10 GHz to 26 GHz

pwr_hlp = zeros(1,length(gain_hlp));
for hlp_id=1:length(gain_hlp)
    gain_hlp_out = conv(ffe_hlp(hlp_id,:)/64.0, sim.ADC_out)*gain_hlp(hlp_id)/64.0;
    pwr_hlp(hlp_id) = mean(abs(gain_hlp_out))*32; %S9.5
end

%%
% dump data
%file = fopen('ADC_output.csv', 'w');
%fprintf(file, '%d, ', sim.ADC_out_int);
%fclose(file);

%dlmwrite('adc_out.txt',sim.ADC_out_int');
