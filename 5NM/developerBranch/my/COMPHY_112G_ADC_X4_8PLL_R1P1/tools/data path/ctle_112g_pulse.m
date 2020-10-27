%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%   Wrapper of 112G-ADC CTLE model using zero and poles
% 
%                    v0.1  July 1, 2019
%
%   Input: Fs - Transmission Baud-rate 
%          osr - oversampling rate
%          varargin - variable argument for future expansion
%   Output: chnl_pulse - channel pulse matrix where each line correspond to
%           a sub-sampled response by oversampled index
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


function ctle_impulse = ctle_112g_pulse(Fs,osr,varargin)

P = bodeoptions;
P.FreqUnits = 'Hz';
P.XLim = [1e7 1e11];

if(isempty(varargin))

    %clear;
    %hold on;

    %%% CTLE Registers %%%
    % HPF Controls
    rx_ctle_hpf_rsel_1st_lane = '11';
    rx_ctle_hpf_rsel_2nd_lane = '11';'0000'; 
    rx_ctle_hpf_rsel_th_lane = '11';

    % Speed Table Controls
    spd='1111';
    rx_ctle_rfb_sel_lane = '11';
    rx_ctle_cur1_sel_lane = spd;
    rx_ctle_cur2_sel_lane = spd;
    rx_ctle_cur_tia_sel_lane = spd;

    rx_ctle_rl1_ctrl_lane = spd;

    % Training Controls
    rx_ctle_rl1_extra_lane = '000';
    rx_ctle_cl1_ctrl_lane = '1111';
    rx_ctle_rs1_ctrl_lane = '0000';
    rx_ctle_cs1_ctrl_lane = '000000';
    rx_ctle_gain_coarse_lane = '0110';
    rx_ctle_cs2_ctrl_lane = '00000';
    rx_ctle_rs2_ctrl_lane = '00000';
    rx_top_rsv_lane = '1111'; % [3:0] used to control CIN

    % AGC Control
    RX_CTLE_GAIN_FINE = '10000';
    
    % Not Modeled
    rx_ctle_cs1_mid_lane = '100'; 
    rx_ctle_rs1_mid_lane = '100'; 
    
    %pole_channel = 6e9;
    
    Nui = 16;
    
    plot_en = 1; %0;
else
    ctrl = varargin{1};
    %clear;
    %hold on;

    %%% CTLE Registers %%%
    % HPF Controls
    rx_ctle_hpf_rsel_1st_lane = '11';
    rx_ctle_hpf_rsel_2nd_lane = '11';'0000'; 
    rx_ctle_hpf_rsel_th_lane = '11';

    % Speed Table Controls
    spd='1111';
    rx_ctle_rfb_sel_lane = '11';
    rx_ctle_cur1_sel_lane = spd;
    rx_ctle_cur2_sel_lane = spd;
    rx_ctle_cur_tia_sel_lane = spd;

    rx_ctle_rl1_ctrl_lane = spd;

    % Training Controls
    rx_ctle_cl1_ctrl_lane = dec2bin(ctrl.CL1,4); %'1111';
    rx_ctle_rs1_ctrl_lane = dec2bin(ctrl.RS1,4); %'0000';
    rx_ctle_cs1_ctrl_lane = dec2bin(ctrl.CS1,6); %'000000';
    rx_ctle_gain_coarse_lane = dec2bin(ctrl.RCOARSE,4); %'0110';
    rx_ctle_cs2_ctrl_lane = dec2bin(ctrl.CS2,5); %'00000';
    rx_ctle_rs2_ctrl_lane = dec2bin(ctrl.RS2,5); %'00000';
    rx_top_rsv_lane = dec2bin(ctrl.Cinnet,4); %'1111'; % [3:0] used to control CIN

    % AGC Control
    RX_CTLE_GAIN_FINE = '10000';
    
    % extra control
    rx_ctle_rl1_extra_lane = '000';
    
    % Not Modeled
    rx_ctle_cs1_mid_lane = '100'; 
    rx_ctle_rs1_mid_lane = '100'; 
    
    %pole_channel = 6e9;
    
    if (length(varargin)>1)
        Nui = varargin{2};
    else
        Nui = 16;
    end
    if (length(varargin)>2)
        plot_en = varargin{3};
    else
        plot_en = 0;
    end
end

switch bin2dec(rx_top_rsv_lane)
	case 0
		CIN = 0e-15;
	case 1
		CIN = 12e-15;
	case 2
		CIN = 24e-15;
	case 3
		CIN = 36e-15;
	case 4
		CIN = 48e-15;
	case 5
		CIN = 60e-15;
	case 6
		CIN = 72e-15;
	case 7
		CIN = 84e-15;
	case 8
		CIN = 96e-15;
	case 9
		CIN = 108e-15;
	case 10
		CIN = 120e-15;
	case 11
		CIN = 132e-15;
	case 12
		CIN = 144e-15;
	case 13
		CIN = 156e-15;
	case 14
		CIN = 168e-15;
	case 15
		CIN = 180e-15;
end

switch bin2dec(rx_ctle_rl1_ctrl_lane)
	case 0
		RL1 = 288;
	case 1
		RL1 = 145;
	case 2
		RL1 = 97;
	case 3
		RL1 = 73;
	case 4
		RL1 = 58;
	case 5
		RL1 = 48;
	case 6
		RL1 = 42;
	case 7
		RL1 = 36;
	case 8
		RL1 = 32;
	case 9
		RL1 = 29;
	case 10
		RL1 = 26;
	case 11
		RL1 = 24;
	case 12
		RL1 = 22;
	case 13
		RL1 = 21;
	case 14
		RL1 = 19;
	case 15
		RL1 = 18;

end

switch bin2dec(rx_ctle_rl1_extra_lane)
	case 0
		RL1_EX = 1e20;
	case 1
		RL1_EX = 288;
	case 2
		RL1_EX = 145;
	case 3
		RL1_EX = 97;
	case 4
		RL1_EX = 73;
	case 5
		RL1_EX = 58;
	case 6
		RL1_EX = 48;
	case 7
		RL1_EX = 42;
end

switch bin2dec(RX_CTLE_GAIN_FINE)
	case 0
		RL1_FINE = 18;
	case 1
		RL1_FINE = 18.8;
	case 2
		RL1_FINE = 19.6;
	case 3
		RL1_FINE = 20.4;
	case 4
		RL1_FINE = 21.2;
	case 5
		RL1_FINE = 22.3;
	case 6
		RL1_FINE = 23.4;
	case 7
		RL1_FINE = 24.5;
	case 8
		RL1_FINE = 25.7;
	case 9
		RL1_FINE = 27.1;
	case 10
		RL1_FINE = 28.5;
	case 11
		RL1_FINE = 30;
	case 12
		RL1_FINE = 32;
	case 13
		RL1_FINE = 34;
	case 14
		RL1_FINE = 36;
	case 15
		RL1_FINE = 38;
	case 16
		RL1_FINE = 41;
	case 17
		RL1_FINE = 44;
	case 18
		RL1_FINE = 48;
	case 19
		RL1_FINE = 52;
	case 20
		RL1_FINE = 57;
	case 21
		RL1_FINE = 62;
	case 22
		RL1_FINE = 69;
	case 23
		RL1_FINE = 77;
	case 24
		RL1_FINE = 88;
	case 25
		RL1_FINE = 101;
	case 26
		RL1_FINE = 119;
	case 27
		RL1_FINE = 144;
	case 28
		RL1_FINE = 181;
	case 29
		RL1_FINE = 244;
	case 30
		RL1_FINE = 368;
	case 31
		RL1_FINE = 742;

end

switch bin2dec(rx_ctle_cl1_ctrl_lane)
	case 0
		CL1 = 0e-15;
	case 1
		CL1 = 13e-15;
	case 2
		CL1 = 26e-15;
	case 3
		CL1 = 39e-15;
	case 4
		CL1 = 52e-15;
	case 5
		CL1 = 65e-15;
	case 6
		CL1 = 78e-15;
	case 7
		CL1 = 91e-15;
	case 8
		CL1 = 104e-15;
	case 9
		CL1 = 117e-15;
	case 10 
		CL1 = 130e-15;
	case 11 
		CL1 = 143e-15;
	case 12 
		CL1 = 156e-15;
	case 13 
		CL1 = 169e-15;
	case 14 
		CL1 = 182e-15;
	case 15 
		CL1 = 195e-15;
end

switch bin2dec(rx_ctle_rs1_ctrl_lane)
	case 0
		RS1 = 24;
	case 1
		RS1 = 28;
	case 2
		RS1 = 33;
	case 3
		RS1 = 39;
	case 4
		RS1 = 46;
	case 5
		RS1 = 56;
	case 6
		RS1 = 68;
	case 7
		RS1 = 85;
	case 8
		RS1 = 106;
	case 9
		RS1 = 134;
	case 10
		RS1 = 171;
	case 11
		RS1 = 221;
	case 12
		RS1 = 290;
	case 13
		RS1 = 394;
	case 14
		RS1 = 730;
	case 15
		RS1 = 1892;
end

%CS1 = bin2dec(rx_ctle_cs1_ctrl_lane) * 28e-15;

switch bin2dec(rx_ctle_cs1_ctrl_lane)
	case 0
		CS1 = 145e-15;
	case 1
		CS1 = 182e-15;
	case 2
		CS1 = 218e-15;
	case 3
		CS1 = 255e-15;
	case 4
		CS1 = 291e-15;
	case 5
		CS1 = 328e-15;
	case 6
		CS1 = 365e-15;
	case 7
		CS1 = 402e-15;
	case 8
		CS1 = 438e-15;
	case 9
		CS1 = 475e-15;
	case 10
		CS1 = 512e-15;
	case 11
		CS1 = 549e-15;
	case 12
		CS1 = 585e-15;
	case 13
		CS1 = 622e-15;
	case 14
		CS1 = 659e-15;
	case 15
		CS1 = 696e-15;
	case 16
		CS1 = 732e-15;
	case 17
		CS1 = 769e-15;
	case 18
		CS1 = 806e-15;
	case 19
		CS1 = 843e-15;
	case 20
		CS1 = 879e-15;
	case 21
		CS1 = 916e-15;
	case 22
		CS1 = 953e-15;
	case 23
		CS1 = 990e-15;
	case 24
		CS1 = 1026e-15;
	case 25
		CS1 = 1063e-15;
	case 26
		CS1 = 1100e-15;
	case 27
		CS1 = 1137e-15;
	case 28
		CS1 = 1173e-15;
	case 29
		CS1 = 1210e-15;
	case 30
		CS1 = 1247e-15;
	case 31
		CS1 = 1284e-15;
	case 32
		CS1 = 1320e-15;
	case 33
		CS1 = 1357e-15;
	case 34
		CS1 = 1394e-15;
	case 35
		CS1 = 1431e-15;
	case 36
		CS1 = 1467e-15;
	case 37
		CS1 = 1504e-15;
	case 38
		CS1 = 1541e-15;
	case 39
		CS1 = 1578e-15;
	case 40
		CS1 = 1614e-15;
	case 41
		CS1 = 1651e-15;
	case 42
		CS1 = 1688e-15;
	case 43
		CS1 = 1724e-15;
	case 44
		CS1 = 1761e-15;
	case 45
		CS1 = 1798e-15;
	case 46
		CS1 = 1834e-15;
	case 47
		CS1 = 1871e-15;
	case 48
		CS1 = 1908e-15;
	case 49
		CS1 = 1944e-15;
	case 50
		CS1 = 1981e-15;
	case 51
		CS1 = 2018e-15;
	case 52
		CS1 = 2054e-15;
	case 53
		CS1 = 2092e-15;
	case 54
		CS1 = 2128e-15;
	case 55
		CS1 = 2164e-15;
	case 56
		CS1 = 2202e-15;
	case 57
		CS1 = 2238e-15;
	case 58
		CS1 = 2274e-15;
	case 59
		CS1 = 2312e-15;
	case 60
		CS1 = 2348e-15;
	case 61
		CS1 = 2384e-15;
	case 62
		CS1 = 2422e-15;
	case 63
		CS1 = 2458e-15;
end

switch bin2dec(rx_ctle_cur1_sel_lane)
	case 0
		GM1 = 1.38E-02;
		GDS_CUR1 = 2.15E-04;
	case 1
		GM1 = 2.51E-02;
		GDS_CUR1 = 3.96E-04;
	case 2
		GM1 = 3.50E-02;
		GDS_CUR1 = 5.68E-04;
	case 3
		GM1 = 4.41E-02;
		GDS_CUR1 = 7.37E-04;
	case 4
		GM1 = 5.25E-02;
		GDS_CUR1 = 9.08E-04;
	case 5
		GM1 = 6.03E-02;
		GDS_CUR1 = 1.08E-03;
	case 6
		GM1 = 6.77E-02;
		GDS_CUR1 = 1.26E-03;
	case 7
		GM1 = 7.47E-02;
		GDS_CUR1 = 1.44E-03;
	case 8
		GM1 = 8.13E-02;
		GDS_CUR1 = 1.62E-03;
	case 9
		GM1 = 8.76E-02;
		GDS_CUR1 = 1.81E-03;
	case 10
		GM1 = 9.37E-02;
		GDS_CUR1 = 2.01E-03;
	case 11
		GM1 = 9.96E-02;
		GDS_CUR1 = 2.21E-03;
	case 12
		GM1 = 1.05E-01;
		GDS_CUR1 = 2.42E-03;
	case 13
		GM1 = 1.11E-01;
		GDS_CUR1 = 2.63E-03;
	case 14
		GM1 = 1.16E-01;
		GDS_CUR1 = 2.86E-03;
	case 15
		GM1 = 1.21E-01;
		GDS_CUR1 = 3.09E-03;

end


switch bin2dec(rx_ctle_cs1_mid_lane)
	case 0
		CS1_MIDF = 240e-15;
	case 1
		CS1_MIDF = 480e-15;
	case 2
		CS1_MIDF = 720e-15;
	case 3
		CS1_MIDF = 960e-15;
	case 4
		CS1_MIDF = 1200e-15;
	case 5
		CS1_MIDF = 1440e-15;
	case 6
		CS1_MIDF = 1680e-15;
	case 7
		CS1_MIDF = 1920e-15;
end


switch bin2dec(rx_ctle_rs1_mid_lane)
	case 0
		RS1_MIDF = 4800;
	case 1
		RS1_MIDF = 2400;
	case 2
		RS1_MIDF = 1600;
	case 3
		RS1_MIDF = 960;
	case 4
		RS1_MIDF = 685;
	case 5
		RS1_MIDF = 436;
	case 6
		RS1_MIDF = 320;
	case 7
		RS1_MIDF = 210;
end



switch bin2dec(rx_ctle_cur2_sel_lane)
	case 0
		GM2 = 8.61E-03;
		GDS_CUR2 = 1.88E-04;
	case 1
		GM2 = 1.51E-02;
		GDS_CUR2 = 3.77E-04;
	case 2
		GM2 = 2.05E-02;
		GDS_CUR2 = 5.83E-04;
	case 3
		GM2 = 2.54E-02;
		GDS_CUR2 = 8.12E-04;
	case 4
		GM2 = 2.97E-02;
		GDS_CUR2 = 1.07E-03;
	case 5
		GM2 = 3.37E-02;
		GDS_CUR2 = 1.36E-03;
	case 6
		GM2 = 3.73E-02;
		GDS_CUR2 = 1.69E-03;
	case 7
		GM2 = 4.07E-02;
		GDS_CUR2 = 2.06E-03;
	case 8
		GM2 = 4.38E-02;
		GDS_CUR2 = 2.49E-03;
	case 9
		GM2 = 4.67E-02;
		GDS_CUR2 = 2.97E-03;
	case 10
		GM2 = 4.94E-02;
		GDS_CUR2 = 3.52E-03;
	case 11
		GM2 = 5.20E-02;
		GDS_CUR2 = 4.14E-03;
	case 12
		GM2 = 5.43E-02;
		GDS_CUR2 = 4.84E-03;
	case 13
		GM2 = 5.66E-02;
		GDS_CUR2 = 5.63E-03;
	case 14
		GM2 = 5.86E-02;
		GDS_CUR2 = 6.52E-03;
	case 15
		GM2 = 6.05E-02;
		GDS_CUR2 = 7.53E-03;

end




switch bin2dec(rx_ctle_gain_coarse_lane)
	case 0
		RFB = 119;
	case 1
		RFB = 127;
	case 2
		RFB = 139;
	case 3
		RFB = 150;
	case 4
		RFB = 164;
	case 5
		RFB = 179;
	case 6
		RFB = 190;
	case 7
		RFB = 209;
	case 8
		RFB = 226;
	case 9
		RFB = 254;
	case 10
		RFB = 272;
	case 11
		RFB = 297;
	case 12
		RFB = 321;
	case 13
		RFB = 355;
	case 14
		RFB = 392;
	case 15
		RFB = 446;
end


%CS2 = bin2dec(rx_ctle_cs2_ctrl_lane) * 25e-15;

switch bin2dec(rx_ctle_cs2_ctrl_lane) 
	case 0
		CS2 = 67e-15;
	case 1
		CS2 = 102e-15;
	case 2
		CS2 = 138e-15;
	case 3
		CS2 = 173e-15;
	case 4
		CS2 = 209e-15;
	case 5
		CS2 = 244e-15;
	case 6
		CS2 = 280e-15;
	case 7
		CS2 = 315e-15;
	case 8
		CS2 = 351e-15;
	case 9
		CS2 = 386e-15;
	case 10
		CS2 = 422e-15;
	case 11
		CS2 = 457e-15;
	case 12
		CS2 = 493e-15;
	case 13
		CS2 = 528e-15;
	case 14
		CS2 = 564e-15;
	case 15
		CS2 = 599e-15;
	case 16
		CS2 = 635e-15;
	case 17
		CS2 = 670e-15;
	case 18
		CS2 = 706e-15;
	case 19
		CS2 = 741e-15;
	case 20
		CS2 = 777e-15;
	case 21
		CS2 = 812e-15;
	case 22
		CS2 = 848e-15;
	case 23
		CS2 = 883e-15;
	case 24
		CS2 = 919e-15;
	case 25
		CS2 = 954e-15;
	case 26
		CS2 = 990e-15;
	case 27
		CS2 = 1025e-15;
	case 28
		CS2 = 1061e-15;
	case 29
		CS2 = 1096e-15;
	case 30
		CS2 = 1132e-15;
	case 31
		CS2 = 1167e-15;

end

switch bin2dec(rx_ctle_rs2_ctrl_lane)
	case 0
		RS2 = 24;
	case 1
		RS2 = 26;
	case 2
		RS2 = 28;
	case 3
		RS2 = 30;
	case 4
		RS2 = 33;
	case 5
		RS2 = 36;
	case 6
		RS2 = 39;
	case 7
		RS2 = 42;
	case 8
		RS2 = 46;
	case 9
		RS2 = 50;
	case 10
		RS2 = 54;
	case 11
		RS2 = 60;
	case 12
		RS2 = 66;
	case 13
		RS2 = 72;
	case 14
		RS2 = 75;
	case 15
		RS2 = 84;
	case 16
		RS2 = 89;
	case 17
		RS2 = 100;
	case 18
		RS2 = 108;
	case 19
		RS2 = 116;
	case 20
		RS2 = 126;
	case 21
		RS2 = 137;
	case 22
		RS2 = 151;
	case 23
		RS2 = 167;
	case 24
		RS2 = 188;
	case 25
		RS2 = 215;
	case 26
		RS2 = 251;
	case 27
		RS2 = 301;
	case 28
		RS2 = 377;
	case 29
		RS2 = 500;
	case 30
		RS2 = 753;
	case 31
		RS2 = 1487;

end


switch bin2dec(rx_ctle_cur_tia_sel_lane)
	case 0
		GM2_TIA = 1.31E-02;
	case 1
		GM2_TIA = 2.28E-02;
	case 2
		GM2_TIA = 3.32E-02;
	case 3
		GM2_TIA = 4.26E-02;
	case 4
		GM2_TIA = 4.91E-02;
	case 5
		GM2_TIA = 5.64E-02;
	case 6
		GM2_TIA = 6.28E-02;
	case 7
		GM2_TIA = 6.80E-02;
	case 8
		GM2_TIA = 7.40E-02;
	case 9
		GM2_TIA = 7.96E-02;
	case 10
		GM2_TIA = 8.20E-02;
	case 11
		GM2_TIA = 8.90E-02;
	case 12
		GM2_TIA = 9.17E-02;
	case 13
		GM2_TIA = 9.75E-02;
	case 14
		GM2_TIA = 1.00E-01;
	case 15
		GM2_TIA = 1.04E-01;

end

switch bin2dec(rx_ctle_hpf_rsel_1st_lane)
	case 0
		P1_HPF_1 = 30e3;
	case 1
		P1_HPF_1 = 60e3;
	case 2
		P1_HPF_1 = 120e3;
	case 3
		P1_HPF_1 = 240e3;	 
end


switch bin2dec(rx_ctle_hpf_rsel_2nd_lane)
	case 0
		P1_HPF_2 = 30e3;
	case 1
		P1_HPF_2 = 60e3;
	case 2
		P1_HPF_2 = 120e3;
	case 3
		P1_HPF_2 = 240e3;		 
end

switch bin2dec(rx_ctle_hpf_rsel_th_lane)
	case 0
		P1_HPF_3 = 30e3;
	case 1
		P1_HPF_3 = 60e3;
	case 2
		P1_HPF_3 = 120e3;
	case 3
		P1_HPF_3 = 240e3;		   
end


% Stage 1 CTLE RC Values
%RS1 = 60.62;
%CS1 = 0e-15;
%GM1 = 0.103;
%RL1 = 44.4;
%RL1_EX = 1e20;
%CL1 = 130e-15;
%RL1_FINE = 1603; %103.378;

% Stage 2 CTLE RC Values
%RS2 = 40;
%CS2 = 0e-15;
%GM2 = 0.05;
%GM2_TIA = 0.075;
%R3 = 50;
CL2 = 300e-15;

% Stage 1 Mid Frequency RC Values
%RS1_MIDF = 685;
%CS1_MIDF = 1200e-15;

% HPF 1,2,3,4 Frequency Values
%P1_HPF_1 = 30e3*2*pi;
%P1_HPF_2 = 30e3*2*pi;
%P1_HPF_3 = 30e3*2*pi;

% Misc
%pole_channel = 2*pi*12e9;
C_PARA1 = 500e-15;
C_PARA2 = 450e-15;
CL1_PARA = 300e-15;
CIN_PARA = 200e-15;
C_TCOIL_PARA = 250e-15;
RS1_PARA = 4;
RS2_PARA = 10;
RFB_PARA = 13;
%wx= 2*pi*28e9;
%qx = 1.5;
%comp_tf = tf( [wx^2] , [1 2*wx/qx wx^2]);

RS1_EFF = 2 / (1/(RS1 + RS1_PARA) + 1/(1/GDS_CUR1));
R3 = (RFB + RFB_PARA) / (1+bin2dec(rx_ctle_rfb_sel_lane));
RS2_EFF = 2 / (1/(RS2 + RS2_PARA) + 1/(1/GDS_CUR2));
RL1_TOT2 = 1 / ( (1/RL1) + (1/RL1_EX) + (0.3/(RL1_FINE*(RL1/18.0))));  
RL1_TOT = 1 / ( (1/RL1) + (1/RL1_EX) + (1/(RL1_FINE*(RL1/18.0))));

CS1_EFF = (CS1+C_PARA1)*0.5;
CS2_EFF = (CS2+C_PARA2)*0.5;

% Input Network
c_normal=(CIN_PARA+CIN)/CIN_PARA;
wo_innet=2*pi*33e9/sqrt(c_normal);
q_innet= 10^(-1/20)/(sqrt(c_normal));
innet= tf([0 0 wo_innet^2], [1 wo_innet/q_innet wo_innet^2]);

% Stage 1 Tcoil
c_normal_tcoil=(C_TCOIL_PARA+CL1)/C_TCOIL_PARA;
R_normal_coil=(RL1_TOT2+ 0)/(15.9+ 0);
wo_tcoil=2*pi*28e9/sqrt(c_normal_tcoil);
q_tcoil= 10^(2/20)/(sqrt(c_normal_tcoil))/R_normal_coil;
in_tcoil = tf([0 0 wo_tcoil^2], [1 wo_tcoil/q_tcoil wo_tcoil^2]);

% Stage 1
zero1 = (1 / (2*3.14*RS1_EFF*(CS1_EFF)))*2*pi;
pole1 = ((1+GM1*0.5*RS1_EFF) / (2*3.14*RS1_EFF*(CS1_EFF)))*2*pi;
pole2 = (1 / (2*3.14*RL1_TOT*(CL1+CL1_PARA)))*2*pi*1e10;
gain = (pole1*pole2/zero1)*(GM1*RL1_TOT) / (1+GM1*0.5*RS1_EFF);

% Stage 1 Mid-Frequency
zero_mid = 1*2*pi;
pole_mid = (1 / (2*3.14*RS1_MIDF*CS1_MIDF))*2*pi;
gain_mid = (RL1_TOT/RS1_MIDF)*pole1*pole2;

% Stage 2 TIA
R_normal_tia=(R3+ 0)/(47.5+ 0);
gm_normal_tia = (GM2_TIA)/1.04E-01;
wo_tia=2*pi*26e9*sqrt(gm_normal_tia/R_normal_tia);
q_tia= 10^(0.2/20)/(sqrt(gm_normal_tia*R_normal_tia));
in_tia = tf([0 0 wo_tia^2], [1 wo_tia/q_tia wo_tia^2]);

% Stage 2 TIA Tcoil
c_normal_tiatcoil=(CL2)/CL2;
R_normal_tiacoil=(1.04E-01+1/47.5)/(GM2_TIA+1/R3);
wo_tiatcoil=2*pi*26e9/sqrt(c_normal_tiatcoil);
q_tiatcoil= 10^(0.2/20)/(sqrt(c_normal_tiatcoil))/R_normal_tiacoil;
in_tiatcoil = tf([0 0 wo_tiatcoil^2], [1 wo_tiatcoil/q_tiatcoil wo_tiatcoil^2]);

% Stage 2
Z1_2 = (1 / (2*3.14*RS2_EFF*(CS2_EFF)))*2*pi;
P1_2 = ((1+GM2*0.5*RS2_EFF) / (2*3.14*RS2_EFF*(CS2_EFF)))*2*pi;
P2_2 = (GM2_TIA / (2*3.14*CL2))*2*pi*1e10;
gain23 = 1.6*(P1_2*P2_2/Z1_2)*(GM2*(R3-0.5/GM2_TIA))/(1+GM2*0.5*RS2_EFF);

%G = zpk([zero1, zero_mid], [pole1, pole2, pole_mid], gain)

% Stage 1 CTLE Transfer Function
G = zpk(-zero1, [-pole1, -pole2], gain);
% G2 = G*G*comp_tf
%bode(innet)
%bode(G*in_tcoil*innet)

% Stage 1 Mid Frequency Transfer Function
%F = zpk(-zero_mid, [-pole_mid, -pole1, -pole2], gain_mid)
F = 0;
%bode(F)

GF = (F+G);
%bode(GF)


% Stage 2 CTLE Transfer Function
H = zpk(-Z1_2, [-P1_2, -P2_2], gain23);
%bode(H)

%bode(in_tiatcoil*H*in_tia,{1e9,5e11})

% HPF 1,2,3,4 Transfer Fuction
HPF1 = zpk(-1, -P1_HPF_1, 1);
HPF2 = zpk(-1, -P1_HPF_2, 1);
HPF3 = zpk(-1, -P1_HPF_2, 1);
HPF4 = zpk(-1, -P1_HPF_3, 1);

% Output of all transfer functions
%I = (F+G)*H*HPF1*HPF2*HPF3*HPF4
%I = (F+G)*H
I = G*in_tcoil*innet*in_tiatcoil*H*in_tia;
%T1st=G*in_tcoil*innet;
%T2nd=in_tiatcoil*H*in_tia;
%bode(I,{1e7,5e11})

%spd = c2d(I, 1.22e-12, 'tustin');
%bode(spd)

if (plot_en == 1)
    figure;
    bodeplot(I,P);
    title('Bode Plot')
    grid on;
end

[y t] =step(I,1/Fs*Nui);

% ti = t(1):1/Fs/osr:t(end);
% yi = interp1(t,y,ti','pchip');
% p = yi;
% p(osr+1:end) = p(osr+1:end) - yi(1:end-osr);
% 
% if (plot_en == 1)
%     figure; plot(ti*Fs,p)
%     title('Pulse response')
%     xlabel('Time (UI)')
%     ylabel('Pulse response')
%     grid on;
% end

ti = t(1):1/Fs/osr:t(end);
yi = interp1(t,y,ti','pchip');
i = [0; diff(yi)];

if (plot_en == 1)
    figure; plot(ti*Fs,i)
    title('Pulse response')
    xlabel('Time (UI)')
    ylabel('Impulse response')
    grid on;
end

ctle_impulse = i;

% Pole for lossy channel
%J = zpk([],-pole_channel,pole_channel)
%bode(I*J)