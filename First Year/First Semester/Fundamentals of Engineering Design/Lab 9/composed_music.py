import numpy as np
from scipy.io import wavfile


class MusicGenerator:

    def __init__(self, sampling_rate):
        self.sampling_rate = sampling_rate

    def generate_sine_wave(self, frequency, duration, amplitude):
        """
        Generates a simple audio signal with a sine wave form.
        """

        num_samples = int(duration * self.sampling_rate)
        time = np.linspace(0, duration, num_samples, endpoint=False)

        audio_signal = amplitude * np.sin(2 * np.pi * frequency * time)
        return audio_signal

    def generate_music(self, notes):
        composed_music = []

        for note in notes:
            frequency = note[1]
            duration = note[2]
            signal = self.generate_sine_wave(frequency, duration, 0.5)
            composed_music.append(signal)

        return np.concatenate(composed_music)

    def save_signal_to_wav(self, filename, signal):
        # normalize to [-1,1]
        signal = signal / np.max(np.abs(signal))
        wavfile.write(filename, self.sampling_rate, signal.astype(np.float32))


def main():
        sampling_rate = 44100
        music_generator = MusicGenerator(sampling_rate)

        # Für Elise intro
        notes = [
            ('E5', 659.26, 0.5),
            ('D#5', 622.25, 0.5),
            ('E5', 659.26, 0.5),
            ('D#5', 622.25, 0.5),
            ('E5', 659.26, 0.5),
            ('B4', 493.88, 0.5),
            ('D5', 587.33, 0.5),
            ('C5', 523.25, 0.5),
            ('A4', 440.00, 1.0),
        ]

        composed_music = music_generator.generate_music(notes)
        music_generator.save_signal_to_wav("composed_music.wav", composed_music)


if __name__ == "__main__":
    main()
