import numpy as np
import matplotlib.pyplot as plt

# Параметри на сигнала
Fs = 100  # Честота на дискретизация (Hz)
T = 70  # Продължителност (секунди)
f = 25  # Честота на синусоидата (Hz)
A = 3  # Амплитуда

# Времеви масив
t = np.arange(0, T, 1 / Fs)

# Генериране на синусоида
signal = A * np.sin(2 * np.pi * f * t)

# Визуализация
plt.plot(t, signal)
plt.xlim(0, 0.1)
plt.title("Синусоидален сигнал")
plt.xlabel("Време (s)")
plt.ylabel("Амплитуда")
plt.grid(True)
plt.show()
