#!/bin/python2

# Requires Python 2.7 with numpy and MATLAB
# Downloadn Pytho 2.7.9 from web-site: https://www.python.org/downloads/release/python-279/
# Upgrade pip
# python -m pip install --upgrade pip
# Install numpy and matlab_wrapper
# python -m pip install numpy
# python -m pip install matlab_wrapper
# Then try to run this script

import platform
import matlab_wrapper
import numpy
import matplotlib.pyplot as plt


def main():
    """
    MAIN function, this runs automatically when matlab_trial.py is invoked
    """
    # Start MATLAB engine
    system = platform.system()
    if system == 'Linux': # due to our IT Linux structure
        matlab_dir = "/mrvl2g/caev3/eda/MATHWORKS/MATLAB/7.14"
    else:
        matlab_dir = None
    matlab = matlab_wrapper.MatlabSession(matlab_root=matlab_dir)

    # Low level example
    a = 12.3
    matlab.put('a', a)
    matlab.eval('b = a * 2')
    b = matlab.get('b')
    print('Low level test')
    print('input a is ' + str(a))
    print('output b is ' + str(b))

    # Workspace function style example
    print('Workspace test')
    x = numpy.arange(0.,6.1,0.1)
    y = matlab.workspace.sin(x)
    
    plt.plot(x,y)
    plt.show()

    # Delete MATLAB object, it will close also the engine
    del matlab

if __name__ == "__main__":
    main()
