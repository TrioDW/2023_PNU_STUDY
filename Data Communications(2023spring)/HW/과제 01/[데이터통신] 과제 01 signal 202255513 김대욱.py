# -*- coding: utf-8 -*-
"""
Signal(문제)
- 주파수, 진폭을 입력으로 단순 정현파를 생성하고
  이를 합성하는 신호를 생성하는 코드
- 합성한 코드는 푸리에 변환을 통해, 주파수 성분으로 다시 분해됨  
"""

import numpy as np
import matplotlib.pyplot as plt
import math

def sin_wave(amp, freq, time):
    return amp * np.sin(2 * np.pi * freq * time)

sr = 2000 # sampling rate
ts = 1.0 / sr # sampling interval
start_second = 0
stop_second = 1
# x축 시간
time=np.linspace(start=start_second, 
                 stop=stop_second, 
                 num=(stop_second-start_second)*sr)

# [TODO 1] 단순 정형파 1: 진폭 9, 주파수 1인 단순 정현파를 time 시간 범위 동안 생성하고 plotting 하시오
y1 = sin_wave(9, 1, time)
plt.plot(time, y1)
plt.title("Sinusoidal wave with amplitude 9 and frequency 1Hz")
plt.xlabel("Time(seconds)")
plt.ylabel("Amplitude")
plt.show()

# [TODO 2] 단순 정형파 2: 진폭 3, 주파수 3인 단순 정현파를 time 시간 범위 동안 생성하고 plotting 하시오
y2 = sin_wave(3, 3, time)
plt.title("Sinusoidal wave with amplitude 3 and frequency 3Hz")
plt.xlabel("Time(seconds)")
plt.ylabel("Amplitude")
plt.plot(time, y2)
plt.show()

# [TODO 3] 단순 정형파 3: 진폭 1, 주파수 9인 단순 정현파를 time 시간 범위 동안 생성하고 plotting 하시오
y3 = sin_wave(1, 9, time)
plt.title("Sinusoidal wave with amplitude 1 and frequency 9Hz")
plt.xlabel("Time(seconds)")
plt.ylabel("Amplitude")
plt.plot(time, y3)
plt.show()

# [TODO 4] 단순 정형파 1,2,3을 하나의 그래프에 모두 도식화하시오
plt.plot(time, y1, label='Sinusoidal wave 1')
plt.plot(time, y2, label='Sinusoidal wave 2')
plt.plot(time, y3, label='Sinusoidal wave 3')
plt.title("Multiple sinusoidal waves")
plt.xlabel("Time (seconds)")
plt.ylabel("Amplitude")
plt.legend()
plt.show()

# [TODO 5] 단순 정형파 1,2,3 의 합성(+) 신호를 생성하고(y_all 변수에 저장) 
# 합성된 신호를 도식화 하시오

y_all = y1 + y2 + y3
plt.plot(time, y_all)
plt.title("Sum of sinusoidal waves")
plt.xlabel("Time (seconds)")
plt.ylabel("Amplitude")
plt.show()

"""
푸리에 분석을 통해 주파수 성분 찾기(Fast Fourier Transform (FFT) algorithm)
참고.
https://pythonnumericalmethods.berkeley.edu/notebooks/chapter24.04-FFT-in-Python.html
https://numpy.org/doc/stable/reference/generated/numpy.fft.fft.html
"""
from numpy.fft import fft, ifft

X = fft(y_all)
N = len(X)
n = np.arange(N)
T = N/sr
freq = n/T 

# [TODO 6] 
# 아래의 코드를 실행하고, 생성되는 그래프를 확인하세요.

plt.figure(figsize = (12, 6))
plt.subplot(121)

plt.stem(freq, np.abs(X), 'b', \
         markerfmt=" ", basefmt="-b")
plt.xlabel('Freq (Hz)')
plt.ylabel('FFT Amplitude |X(freq)|')
plt.xlim(0, 10)

plt.subplot(122)
plt.plot(time, ifft(X), 'r')
plt.xlabel('Time (s)')
plt.ylabel('Amplitude')
plt.tight_layout()
plt.show()