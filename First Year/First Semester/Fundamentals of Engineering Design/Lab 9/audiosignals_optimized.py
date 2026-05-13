import numpy as np
from scipy.io import wavfile
import matplotlib.pyplot as plt
from scipy.signal import find_peaks

sampling_rate = 44100


# ----------------------------------------
# WAVE GENERATORS
# ----------------------------------------

def generate_sine_wave(frequency, duration, amplitude):
    samples = int(sampling_rate * duration)
    t = np.linspace(0, duration, samples, endpoint=False)
    return amplitude * np.sin(2 * np.pi * frequency * t)


def generate_rectangular_wave(frequency, duration, amplitude):
    samples = int(sampling_rate * duration)
    t = np.linspace(0, duration, samples, endpoint=False)
    return amplitude * np.sign(np.sin(2 * np.pi * frequency * t))


def generate_asymetric_triangular_wave(frequency, duration, amplitude):
    samples = int(sampling_rate * duration)
    t = np.linspace(0, duration, samples, endpoint=False)

    T = 1 / frequency
    ratio = 0.3
    x = t % T
    up = ratio * T

    signal = np.where(
        x < up,
        amplitude * (x / up),
        amplitude * (1 - (x - up) / (T - up))
    )
    return signal


def generate_symetric_triangular_wave(frequency, duration, amplitude):
    samples = int(sampling_rate * duration)
    t = np.linspace(0, duration, samples, endpoint=False)
    T = 1 / frequency
    return (2 * amplitude *
            (2 * np.abs((t / T) - np.floor(t / T + 0.5))) - amplitude)


# ----------------------------------------
# VISUALIZATION
# ----------------------------------------

def visualize_signal(audio_signal, title="Audio signal"):
    plt.figure(figsize=(10, 4))
    plt.plot(audio_signal)
    plt.xlim(0, 2000)
    plt.title(title)
    plt.xlabel("Sample index")
    plt.ylabel("Amplitude")
    plt.grid()
    plt.show()


def plot_positive_spectrum(signal, title="Spectrum"):
    N = len(signal)
    fft_vals = np.fft.fft(signal)
    freqs = np.fft.fftfreq(N, 1 / sampling_rate)

    mask = freqs >= 0
    freqs_pos = freqs[mask]
    fft_pos = np.abs(fft_vals[mask])

    # Основна честота
    peak_idx = np.argmax(fft_pos)
    peak_freq = freqs_pos[peak_idx]
    peak_amp = fft_pos[peak_idx]

    print(f'\n{title}: Основна честота = {peak_freq:.2f} Hz')
    print(f'{title}: Амплитуда на основната = {peak_amp:.2f}')

    plt.figure(figsize=(10, 4))
    plt.plot(freqs_pos, fft_pos)
    plt.title(title)
    plt.xlabel("Frequency (Hz)")
    plt.ylabel("Amplitude")
    plt.grid()
    plt.xlim(0, 5000)
    plt.show()

    return freqs_pos, fft_pos


# ----------------------------------------
# SAVE WAV
# ----------------------------------------

def save_signal_to_wav(filename, signal):
    max_amp = np.max(np.abs(signal))
    normalized = signal / max_amp
    wavfile.write(filename, sampling_rate, normalized.astype(np.float32))


# ----------------------------------------
# MEASUREMENTS
# ----------------------------------------

def measure_period_and_frequency(signal, name):
    peaks, _ = find_peaks(signal)

    if len(peaks) < 2:
        print(f'{name}: Няма достатъчно пикове')
        return

    T = (peaks[1] - peaks[0]) / sampling_rate
    f = 1 / T

    print(f'\n{name}:')
    print(f'Период: {T:.6f} s')
    print(f'Честота: {f:.2f} Hz')


# ----------------------------------------
# HARMONICS
# ----------------------------------------

def analyze_harmonics(freqs, spectrum, base_freq, name, odd_only=False):
    print(f'\nХармоници за {name}:')

    if odd_only:
        harmonics = [1, 3, 5, 7]      # правоъгълна + симетрична триъгълна
    else:
        harmonics = [1, 2, 3]         # асиметрична – поискани първите 3 хармон.

    for h in harmonics:
        target = base_freq * h
        idx = np.argmin(np.abs(freqs - target))
        amp = spectrum[idx]
        print(f'{h}-ти хармоник ({target:.1f} Hz): Амплитуда = {amp:.2f}')


# ----------------------------------------
# MAIN
# ----------------------------------------

def main():
    frequency = 470
    duration = 1
    amplitude = 1

    # SINE
    sine = generate_sine_wave(frequency, duration, amplitude)
    measure_period_and_frequency(sine, 'Sine wave')
    visualize_signal(sine, "Sine wave")
    freqs_sine, fft_sine = plot_positive_spectrum(sine, "Sine wave spectrum")
    save_signal_to_wav("sine.wav", sine)

    # RECTANGLE
    rect = generate_rectangular_wave(frequency, duration, amplitude)
    measure_period_and_frequency(rect, 'Rectangular wave')
    visualize_signal(rect, "Rectangular wave")
    freqs_rect, fft_rect = plot_positive_spectrum(rect, "Rectangular wave spectrum")
    save_signal_to_wav("rectangular.wav", rect)
    analyze_harmonics(freqs_rect, fft_rect, frequency, "Rectangular wave", odd_only=True)

    # ASYMMETRIC TRIANGLE
    asym_tri = generate_asymetric_triangular_wave(frequency, duration, amplitude)
    measure_period_and_frequency(asym_tri, 'Asymmetric triangular wave')
    visualize_signal(asym_tri, "Asymmetric triangular wave")
    freqs_asym, fft_asym = plot_positive_spectrum(asym_tri, "Asymmetric triangular wave spectrum")
    save_signal_to_wav("asymmetric_triangle.wav", asym_tri)
    analyze_harmonics(freqs_asym, fft_asym, frequency, "Asymmetric triangular wave", odd_only=False)

    # SYMMETRIC TRIANGLE
    sym_tri = generate_symetric_triangular_wave(frequency, duration, amplitude)
    measure_period_and_frequency(sym_tri, 'Symmetric triangular wave')
    visualize_signal(sym_tri, "Symmetric triangular wave")
    freqs_sym, fft_sym = plot_positive_spectrum(sym_tri, "Symmetric triangular wave spectrum")
    save_signal_to_wav("symmetric_triangle.wav", sym_tri)
    analyze_harmonics(freqs_sym, fft_sym, frequency, "Symmetric triangular wave", odd_only=True)


if __name__ == "__main__":
    main()
