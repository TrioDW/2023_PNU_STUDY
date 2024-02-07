# -*- coding: utf-8 -*-
"""
Shannon(문제)
- Shannon 공식을 사용하는 문제
- 목표 Capacity 성능(bits/second)을 달성하기 위해, 필요한 송신 전력을 계산하는 문제
"""

import math
import matplotlib.pyplot as plt
"""
아래와 같이 파라미터가 주어졌다
섀논 공식에 따르면, 
Capa = B * log2(1+SNR) 로 Capacity를 구할 수 있고, SNR = signal to noise ratio 이다
SNR = (ch_gain*tx_power) / (BW*per_Hz_noise) 로 풀어쓸 수 있고,
- ch_gain : channel gain (신호의 감쇠 정도)
- tx_power : 송신 전력
- BW : 주파수 대역폭
- per_Hz_noise : Hz 당 노이즈
이다.
"""
def get_capacity(ch_gain, tx_power, BW, per_Hz_noise):
    return BW*math.log(1+ch_gain*tx_power/(BW*per_Hz_noise), 2)
"""
목표하는 Capa를 달성하기 위해, 얼마의 송신 전력(tx_power)을 사용해야 하는지를
계산하는 프로그램을 작성하시오.
"""
Capa = 1024 # bps
BW = 100 # Hz
per_Hz_noise = pow(10, -13) # Hz당 노이즈(Watt), per-Hz noise in watt
ch_gain = 0.000001

# [TODO 1] 여기를 계산하는 코드를 작성하시오.
# - 변수명을 사용하여 코드를 작성하시오
#   (각 변수에 할당된 실제 값을 직접 사용하여 코딩하지 마시오)
SNR = math.pow(2, Capa/BW) - 1
tx_power =  SNR * BW * per_Hz_noise / ch_gain
print('1. 필요한 송신 전력 세기:', tx_power)

print('2. 목표 전송 용량:', Capa)
c = get_capacity(ch_gain, tx_power, BW, per_Hz_noise)
print('3. 전송 용량 계산값:', c)

# 계산 결과 검증
if( abs(Capa-c) < Capa * 0.01 ):  # 1% 미만 오차는 허용
    print("=> Success")
else:
    print("=> Failed")

# [TODO 2]
# BW 변화에 따른 tx_power 필요량 변화를 그래프로 그리기
# 가용 BW가 50, 51, 52, ..., 150 일때, 각각 필요한
# tx_power가 얼마인지를 계산하고, 그 결과를 그래프로 그리기
# (x축: Available bandwidth, y축: Required tx power)
available_bw=list(range(50,150,1))
required_tx_pw2 = []

def getTxPower(Capa, bw, per_Hz_noise, ch_gain) :
    SNR = math.pow(2, Capa/bw) - 1
    return (SNR * bw * per_Hz_noise) / ch_gain

for bw in available_bw:
    required_tx_pw2.append(getTxPower(Capa, bw, per_Hz_noise, ch_gain))

plt.plot(available_bw, required_tx_pw2)
plt.title("Required Tx Power per available BW")
plt.xlabel("Available bandwidth")
plt.ylabel("Required tx power")
plt.show()

# [TODO 3]
# 위의 TODO 2와 모두 동일하고, 
# Hz당 노이즈가 2배 감소할때(per_Hz_noise /= 2),
# 가용 BW별 필요 tx power 변화를 그리시오
required_tx_pw3 = []

for bw in available_bw:
    required_tx_pw3.append(getTxPower(Capa, bw, per_Hz_noise/2, ch_gain))

plt.plot(available_bw,required_tx_pw3)
plt.title("Required Tx Power per available BW (half noise)")
plt.xlabel("Available bandwidth")
plt.ylabel("Required tx power")
plt.show()

# [TODO 4]
# 위의 TODO 2와 모두 동일하고, 
# ch_gain이 2배 감소할때(ch_gain /= 2),
# 가용 BW별 필요 tx power 변화를 그리시오
required_tx_pw4 = []

for bw in available_bw:
    required_tx_pw4.append(getTxPower(Capa, bw, per_Hz_noise, ch_gain/2))

plt.plot(available_bw,required_tx_pw4)
plt.title("Required Tx Power per available BW (half ch gain)")
plt.xlabel("Available bandwidth")
plt.ylabel("Required tx power")
plt.show()