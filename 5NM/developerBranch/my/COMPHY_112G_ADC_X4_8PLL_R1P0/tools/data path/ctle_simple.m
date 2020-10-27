%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%   Simple CTLE 2 zero, 4 poles model for use with Simple Data Path Model
% 
%                    v0.1  Mar 14, 2019
%     v0.2 added option 2 with channel (6G pole) and 6dB CTLE boost
%                   dvisani@marvell.com
%
%   Input: Fs - Transmission Baud-rate 
%          osr - oversampling rate
%          varargin - variable argument for future expansion
%   Output: chnl_pulse - channel pulse matrix where each line correspond to
%           a sub-sampled response by oversampled index
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


function chnl_pulse = ctle_simple(Fs,osr,varargin)

P = bodeoptions;
P.FreqUnits = 'Hz';

if(isempty(varargin))
    
%     % Stage 1 CTLE RC Values
%     RS1 = 60.62;
%     CS1 = 0e-15;
%     GM1 = 0.103;
%     RL1 = 44.4;
%     RL1_EX = 1e20;
%     CL1 = 13e-15;
% 
%     % Stage 2 CTLE RC Values
%     RS2 = 320;
%     CS2 = 0;
%     GM2 = 0.05;
%     R3 = 200;
%     CL2 = 150e-15;
%     
%     C_PARA = 150e-15;
%     RL1_TOT = 1 / ( (1/RL1) + (1/RL1_EX) );
%     
%     % Stage 1
%     Z1 = (1 / (2*3.14*RS1*(CS1+C_PARA)));
%     P1 = ((1+GM1*0.5*RS1) / (2*3.14*RS1*(CS1+C_PARA)));
%     P2 = (1 / (2*3.14*RL1_TOT*CL1))*2*pi;
%     gain = (GM1*RL1_TOT) / (1+GM1*0.5*RS1);
%     
%     % Stage 2
%     Z1_2 = (1 / (2*3.14*RS2*(CS2+C_PARA)));
%     P1_2 = ((1+GM2*0.5*RS2) / (2*3.14*RS2*(CS2+C_PARA)));
%     P2_2 = (1 / (2*3.14*R3*CL2));
%     gain_2 = (GM2*R3)/(1+GM2*0.5*RS2);

    % option 1 (MDL_CTLE)
%     Z1 = 1.751189e10; %Hz
%     P1 = 7.21828e10;  %Hz
%     P2 = 2.79925e10;  %Hz
%     gain = 1.0934323; 
% 
%     Z1_2 = 2.653927e10;    %Hz
%     P1_2 = 5.3078556e10;   %Hz
%     P2_2 = 2.12314225e10;  %Hz
%     gain_2 = 1.25;
    
    % option 2 (MDL_CTLE, CHANNEL_CTLE, )
    Z1 = 1.0507e10;
    P1 = 4.3310e10;
    P2 = 2.6366e10;
    Z1_2 = 1.5924e10;
    P1_2 = 3.1847e10;
    P2_2 = 3.9809e10;
    gain = 0.5031;
    gain_2 = 1.25;
    
    pole_channel = 6e9;
    
    Nui = 16;
    
    plot_en = 0;
end

k = 2*pi * P1 * P2 / Z1 * gain; 

% Stage 1 CTLE Transfer Function
G = zpk(-2*pi*Z1, [-2*pi*P1, -2*pi*P2], k);
%figure;
%bodeplot(G)

%%

k_2 = 2*pi * P1_2 * P2_2 / Z1_2 * gain_2;

% Stage 1 Mid Frequency Transfer Function
F = 0; %zpk(-zero_mid, [-pole_mid, -pole1, -pole2], gain_mid)
%bodeplot(F)

%GF = (F+G);
%bode(GF)

% Stage 2 CTLE Transfer Function
H = zpk(-2*pi*Z1_2, [-2*pi*P1_2, -2*pi*P2_2], k_2);
%figure;
%bode(H)

% HPF 1,2,3,4 Transfer Fuction
HPF1 = 1;%zpk(-1, -P1_HPF_1, 1);
HPF2 = 1;%zpk(-1, -P1_HPF_2, 1);
HPF3 = 1;%zpk(-1, -P1_HPF_2, 1);
HPF4 = 1;%zpk(-1, -P1_HPF_3, 1);

% Output of all transfer functions
I = (F+G)*H*HPF1*HPF2*HPF3*HPF4;

% Pole for lossy channel
J = zpk([],-2*pi*pole_channel,2*pi*pole_channel);
I = I*J;

if (plot_en == 1)
    figure;
    bodeplot(I,P);
    title('Bode Plot')
    grid on;
end

[y t] =step(I,1/Fs*Nui);

%%

ti = t(1):1/Fs/osr:t(end);
yi = interp1(t,y,ti','pchip');
p = yi;
p(osr+1:end) = p(osr+1:end) - yi(1:end-osr);

if (plot_en == 1)
    figure; plot(ti*Fs,p)
    title('Pulse response')
    xlabel('Time (UI)')
    ylabel('Pulse response')
    grid on;
end

p = [zeros(Nui*osr,1); p; zeros(Nui*osr,1)];
chnl_pulse = reshape(p(1:floor(length(p)/osr)*osr),osr,[]);
chnl_pulse = chnl_pulse;

