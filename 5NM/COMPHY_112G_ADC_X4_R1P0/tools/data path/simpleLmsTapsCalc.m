%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%   Simple Calculation of Lms Taps given channel and noise
% 
%                    v0.1  Sep 21, 2018
%  v0.2 Dec 19, 2018 transformed into function and update FFE number of taps
%  v0.3 Mar 13, 2019 added FFE force option and Mueller-Mueller detector
%                   dvisani@marvell.com
%
%   Input: sampled pulse response channel+ctle
%          parameter in structure param
%          verbose (0 or 1)
%   Output: FFE, GAIN, DFE taps for Data-Path or Clock-Path
%           MM (Mueller-Mueller detector output
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function [FFE GAIN DFE MM] = simpleLmsTapsCalc(varargin)

if(isempty(varargin))
    % Read in results file
    filename = 'pulse_eg_osr_64.txt';%'channel_step_osr_32.txt';
    param.OS = 64; % oversampling of channel response file
    chnl_pulse = importdata(filename)'; % reads channel pulse
    param.ts = 32;  % sampling position - between 1 and param.OS
    
    % sampled chnl_pulse_sampled
    chnl_impulse = chnl_pulse(param.ts,:);
    [~, q] = max(abs(chnl_impulse));
    %chnl_impulse([1:q-1 q+1:end]) = 0; % select cursor and some other ISI
    
    % Model parameters
    param.Fullscale = 0.2; % ADC Full-Scale (zero-peak)
    param.ENOB = 6.0; % ADC effective number of bits
    param.noise_rms = 3e-3; % noise at input of ADC which is not ENOB
    param.PAM4 = 1; % 1: PAM4, 0: PAM2
    param.DP = 1; % 1 DP, 0: CP
    param.TXamp = 1.0; % differential pk-pk
    param.TXffe = [0.0 1.0 0.0]; % sum(abs()) should make 1.0
    param.project = 'comphy112gADC';
    verbose = 1;
else
    chnl_impulse = varargin{1};
    param = varargin{2};
    verbose = varargin{3};
end

% Read in results file
% filename = 'channel_step_osr_32.txt'; % channel step response including TX-FIR, TX-amplitude, channel, CTLE
% param.OS = 32; % oversampling of channel response file
% param.chnl_step = importdata(filename)'; % reads in param and absolute_optimum
% chnl_pulse = (param.chnl_step - [zeros(1,param.OS) param.chnl_step(1:end-param.OS)]);
% param.ts = 13;  % sampling position - between 1 and param.OS


% calculation parameters
if (param.DP == 1) % Data-Path
    param.numTapsFFE = 29;
    param.numTapsDFE = 1;
    param.FFEprecursor = 8;
    param.FFEsaturate = 1;
    param.DFEsaturate = 1;
    param.FFEsatLevel = [0.0625*ones(1,5), 0.125, 0.25, 1, 1, 1, 0.5, 0.25, 0.125, 0.0625*ones(1,16)];
    param.DFEsatLevel = [1];
    param.FFEquantization = 6;
    param.DFEquantization = 5;
    param.GAINquantization = 6;
else % Clock-Path
    param.numTapsFFE = 7;
    param.numTapsDFE = 0;
    param.FFEprecursor = 3;
    param.FFEsaturate = 1;
    param.DFEsaturate = 1;
    param.FFEsatLevel = [0.25, 0.5, 1, 1, 1, 0.5, 0.25];
    param.DFEsatLevel = [0];
    param.FFEquantization = 5;
    param.DFEquantization = 0;
    param.GAINquantization = 5;
end

if (~isfield(param,'FFEforce'))
    param.FFEforce = 0;
end
if (~isfield(param,'coef_noise_std'))
    param.coef_noise_std = 0;
end

% Get the optimal impulse response @CTLE output at Baud rate
input.impulse = filter(param.TXamp/2 * param.TXffe, 1, chnl_impulse) / param.Fullscale;

% noise
ENOB_noise_pwr = 10^(-(param.ENOB*6.02+1.76)/10) * param.Fullscale^2/2;
input.noise = (param.noise_rms^2 + ENOB_noise_pwr) / param.Fullscale^2;

% sampling position index to check
param.samplingRange = param.ts;

% some other needed parameters set to default values (unedded here
param.r = 0;
param.HalfTapDFE = [1 1];

%% Calculation taken from a portion of DSP performance evaluation tool
%  from file optimize_DSP.m svn revision 12622 on 09/21/2018
%  Changes: commented some lines, replaced KP4 with PAM4, and added
%  optimum.GAIN calculation considering by 3 factor in slicer

% ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### #####
% ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### #####

%                 MAIN OPTIMIZATION ROUTINE
%                Computes optimal FFE and DFE
%                     and sampling time

% Get best sampling time

optimum.error.isi = +inf;
for xx = param.samplingRange 
    
    f = input.impulse; % baud rate channel
    
    [~, q] = max(abs(f));
    
    % Build PSI matrix (Proakis page 662 eq. (9.5-4))
    % K1 = param.numTapsFFE-1;
    % K2 = param.numTapsDFE
    ll = param.numTapsFFE + param.numTapsDFE;
    p = -(param.numTapsFFE-1-param.FFEprecursor);
    % q = x;
    % -param.r = -param.-param.r;
    
    L = length(f);
    
    % loop until the FFE cursor is where expected
    do = 2;
    cursor = 0;
    while (do > 0)
        PSI = zeros([ll, ll]);
        PHI = zeros([ll 1]);
        
        if (cursor ~= 0)
            q = q + (1+param.FFEprecursor) - cursor;
        end
        
        % extend if number of FFE taps exceed the pre-cursor (post-cursor
        % typically not a problem
        dist_p_q = 1 - (p+q);
        if (dist_p_q > 0)
           f = [zeros(1,dist_p_q+1) f];
           q = q + dist_p_q+1;
        end
        
        % PSI_A
        for s = 1:param.numTapsFFE
            for t = 1:param.numTapsFFE
                for n = max(1, 1+s-t):min(L, L+s-t)
                    PSI(s, t) = PSI(s, t) + f(n)*f(n-s+t);
                end
                if param.PAM4
                    PSI(s, t) = PSI(s, t) * (5/9);  % PAM-4
                end
                if (s == t)
                    PSI(s, t) = PSI(s, t) + input.noise;
                end
            end
            
            % PHI_A
            try
                PHI(s) = f(p+q+param.numTapsFFE-s); %f(p+q-(s-param.numTapsFFE));
            catch ind_err
                disp([p q param.numTapsFFE s]); 
            end
            
            if param.PAM4
                PHI(s) = PHI(s) * (5/9);  % PAM-4
            end
            
            % PSI_B
            for t = param.numTapsFFE+1:ll
                PSI(s, t) = param.HalfTapDFE(1)*f(p+q+t-s-param.r);
                if param.PAM4
                    PSI(s, t) = PSI(s, t) * (5/9);  % PAM-4
                end
            end
        end
        
        % PSI_C
        for s = param.numTapsFFE+1:ll
            for t = 1 : param.numTapsFFE
                PSI(s, t) = param.HalfTapDFE(2)*f(p+q+s-t-param.r);
            end
            % PSI_D
            PSI(s, s) = 1;
            % PHI_B
            PHI(s) = 0;
        end
        
        coeff_0 = PSI \ PHI;
        
        [~, cursor] = max(abs(coeff_0(1:param.numTapsFFE)));
       
        if (cursor == (1+param.FFEprecursor))
            do = 0;
        else
            do = do-1;
        end
    end
    
    % normalize coefficients
    coeff_0 =  coeff_0.*(1+param.coef_noise_std*randn(size(coeff_0)));
    coeff = coeff_0/coeff_0(param.FFEprecursor+1);
        
    if (param.FFEforce == 1)
        if (size(param.FFE,2) > size(param.FFE,1))
            param.FFE = param.FFE'; % expected column vector
        end
        ffe_taps = param.FFE;
    else
        ffe_taps = coeff(1:param.numTapsFFE);
    end
    dfe_taps = coeff(param.numTapsFFE+1:end);

    if (param.HalfTapDFE(1) ~= 1)
        dfe_taps = 2/3*dfe_taps;
    end
    
    % we have the coefficients, we need to quantize and saturate them.
    sat_FFE_1 = 0;
    if (param.FFEsaturate ==1)
        sat_FFE_1 = 0;
        for k = 1:param.numTapsFFE
            if (abs(ffe_taps(k)) > param.FFEsatLevel(k))
                ffe_taps(k) = sign(ffe_taps(k)) * param.FFEsatLevel(k);
                sat_FFE_1 = 1;
            end
        end
    end
    
    sat = 0;
    if (param.DFEsaturate == 1)
        
        % Calculate impulse with un-quantized FFE taps
        impulse = conv(ffe_taps, f);
        cursor = (param.numTapsFFE+p)+q-1;
        
        %%%%%%%%%%%%%%%%%%%%%%%%
%         if (abs(impulse(cursor))<max(abs(impulse)))
%             break;
%         end
        %%%%%%%%%%%%%%%%%%%%%%%%
        
        dfe_taps_norm = - dfe_taps / impulse(cursor);
        dfe_taps_norm_no_sat = dfe_taps_norm;
        
        % Checking for DFE taps saturation
        for k = 1:param.numTapsDFE
            ref = param.DFEsatLevel(k)*impulse(cursor);
            if (abs(dfe_taps(k)) > ref)
                dfe_taps(k) = sign(dfe_taps(k))*ref;
                dfe_taps_norm(k) = sign(dfe_taps_norm(k)) * param.DFEsatLevel(k);
                sat = 1;
            end
        end
        if (sat == 1)
            % If some DFE taps saturate, quantized them, then determine new
            % ffe_taps, saturate them and then determine new DFE taps
            
            % DFE coefficients quantization
            Q = 1 / (2^param.DFEquantization); % quantization step (coeff range -1/+1)
            dfe_taps_norm_quant = round(dfe_taps_norm/Q)*Q;
            
            % recompute FFE coefficients
            PSI_2 = PSI(1:param.numTapsFFE, 1:param.numTapsFFE);
            PHI_2 = PHI(1:param.numTapsFFE) - PSI(1:param.numTapsFFE, param.numTapsFFE+1:ll) ...
                * (-dfe_taps_norm_quant) * impulse(cursor) * coeff_0(param.FFEprecursor+1);
            ffe_taps_0 = PSI_2\PHI_2;
            
            ffe_taps = ffe_taps_0/ffe_taps_0(param.FFEprecursor+1);
            
            if (param.FFEsaturate == 1)
                
                for k = 1:param.numTapsFFE-1+1
                    if (abs(ffe_taps(k)) > param.FFEsatLevel(k))
                        ffe_taps(k) = sign(ffe_taps(k)) * param.FFEsatLevel(k);
                    end
                end
                
            end
            
            % FFE coefficients quantization
            Q = 1 / (2^param.FFEquantization); % quantization step (coeff range -1/+1)
            ffe_taps_quant = round(ffe_taps/Q)*Q;
            
            % Calculate impulse with quantized recomputed FFE taps
            impulse = conv(ffe_taps_quant, f);
            
            if (size(impulse, 1) > size(impulse, 2))
                impulse = impulse';
            end
            
            impulse(cursor+param.r+(1:param.numTapsDFE)) = impulse(cursor+param.r+(1:param.numTapsDFE))...
                - dfe_taps_norm_quant'*impulse(cursor);
        end
        
    end
    
    
    if (param.DFEsaturate == 0) || (sat == 0)
        % If no DFE taps saturate, the same as param.DFEsaturate = 0
        
        % FFE coefficients quantization
        Q = 1 / (2^param.FFEquantization); % quantization step (coeff range -1/+1)
        ffe_taps_quant = round(ffe_taps/Q)*Q;
        
        % Calculate impulse with quantized FFE taps
        impulse = conv(ffe_taps_quant, f);
        cursor = (param.numTapsFFE+p)+q-1;
        
        dfe_taps_norm = impulse(cursor+param.r+(1:param.numTapsDFE)) / impulse(cursor);
        
        dfe_taps_norm_no_sat = dfe_taps_norm;
        
        % DFE coefficients quantization
        Q = 1 / (2^param.DFEquantization); % quantization step (coeff range -1/+1)
        dfe_taps_norm_quant = round(dfe_taps_norm/Q)*Q;
        
        impulse(cursor+param.r+(1:param.numTapsDFE)) = impulse(cursor+param.r+(1:param.numTapsDFE))...
            - dfe_taps_norm_quant*impulse(cursor);
    end
        
    gain = 1/max(abs(impulse));
    
    if (param.HalfTapDFE(1) ~= 1)
        impulse_ = impulse;
        % if we have half taps in PAM4, the error is always one LSB, so its
        % average is 1 in place of (1+3^2)^2=5, we need to precompensate
        % this
        impulse_(cursor+param.r+(1:param.numTapsDFE)) = impulse(cursor+param.r+(1:param.numTapsDFE))/sqrt(5);
        ISI_power = gain^2*sum(impulse_.^2) - 1;
    else
        ISI_power = gain^2*sum(impulse.^2) - 1;
    end
    
%     if (20*log10(gain) > param.maxRXgain)
%         ISI_power = 100*ISI_power;
%     end
    
    
    if (ISI_power < optimum.error.isi)
        optimum.FFE.taps = ffe_taps;
        optimum.FFE.sat_flag = sat_FFE_1;
        optimum.FFE.taps_quant = ffe_taps_quant;
        
        optimum.DFE.sat_flag = sat;
        optimum.DFE.taps = dfe_taps;
        optimum.DFE.taps_norm = dfe_taps_norm;
        optimum.DFE.taps_norm_no_sat = dfe_taps_norm_no_sat;
        optimum.DFE.taps_norm_quant = dfe_taps_norm_quant;
        
        optimum.error.isi = ISI_power; 
        optimum.error.noise = (input.noise*gain^2*sum(ffe_taps_quant.^2));
        
        optimum.error.power = optimum.error.isi+optimum.error.noise;
        %optimum.error.ctle_noise_gain = ctle_noise_gain;
        
        optimum.input.impulse = impulse;
        optimum.input.time = xx+1; % index of the vector [1...OS]
        if (dist_p_q > 0)
            %optimum.input.cursor = (param.numTapsFFE+p)+q-dist_p_q-2;
            optimum.input.input_OS = [zeros(1,dist_p_q+1)*param.OS input.impulse];
        else
            %optimum.input.cursor = (param.numTapsFFE+p)+q-1;
            optimum.input.input_OS = input.impulse;
        end
        optimum.input.cursor = (param.numTapsFFE+p)+q-1;
        optimum.input.noise = input.noise;
        
        %optimum.input.ADC_saturation = ADC_clipped;
        %optimum.input.par_dB = input.par_dB;
        %optimum.input.xtalk_power_in = input.xtalk_power_in;
        
        optimum.GAIN = round(gain*3*... % by 3 because digital slicer expect +/-1, +/-3
            2^param.GAINquantization)/2^param.GAINquantization;
        
        % Mueller Mueller F1 - Fn1 principle
        optimum.MM = impulse(cursor-1) - impulse(cursor+1);
    end
end

% ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### #####
% ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### #####


%% Printing Lms Taps value

if (verbose == 1)
    if (param.DP==1)
        disp('FFE')
        disp(optimum.FFE.taps_quant'*2^param.FFEquantization)
        disp('GAIN')
        disp(optimum.GAIN*2^param.GAINquantization)
        disp('DFE')
        disp(optimum.DFE.taps_norm_quant*2^param.DFEquantization)
    else
        disp('FFE-DTL')
        disp(optimum.FFE.taps_quant'*2^param.FFEquantization)
        disp('GAIN-DTL')
        disp(optimum.GAIN*2^param.GAINquantization)
    end
end

FFE =  optimum.FFE.taps_quant';
GAIN = optimum.GAIN;
DFE = optimum.DFE.taps_norm_quant;

MM = optimum.MM;

