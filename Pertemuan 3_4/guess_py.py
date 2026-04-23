# guess_py.py
import random

def play(min_v=1, max_v=100):
    secret = random.randint(min_v, max_v)
    attempts = 0
    print(f"Tebak angka antara {min_v} sampai {max_v}!")
    while True:
        try:
            guess = int(input("Masukkan tebakan: "))
        except ValueError:
            print("Input bukan angka, coba lagi.")
            continue
        attempts += 1
        if guess < secret:
            print("Terlalu kecil.")
        elif guess > secret:
            print("Terlalu besar.")
        else:
            print(f"Benar! Kamu menebak dalam {attempts} percobaan.")
            break

if __name__ == "__main__":
    play()
