import random
import os

def load_best():
    if os.path.exists("best_hard.txt"):
        with open("best_hard.txt", "r") as f:
            return int(f.read())
    return None

def save_best(score):
    with open("best_hard.txt", "w") as f:
        f.write(str(score))

def play():
    min_v, max_v = 1, 1000
    secret = random.randint(min_v, max_v)
    attempts = 0

    best = load_best()

    print(f"Tebak angka antara {min_v}-{max_v}")

    while True:
        try:
            guess = int(input("Masukkan tebakan: "))
        except ValueError:
            print("Input harus angka!")
            continue

        attempts += 1

        if guess < secret:
            print("Terlalu kecil")
        elif guess > secret:
            print("Terlalu besar")
        else:
            print(f"Benar! Percobaan: {attempts}")

            if best is None or attempts < best:
                print("🎉 Best score baru!")
                save_best(attempts)
            else:
                print(f"Best score: {best}")
            break

if __name__ == "__main__":
    play()