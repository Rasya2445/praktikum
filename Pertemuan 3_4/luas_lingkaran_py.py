import math

def luas_lingkaran(r):
    return math.pi * r * r

# input user
r = float(input("Masukkan jari-jari lingkaran: "))

hasil = luas_lingkaran(r)
output = f"Luas lingkaran dengan r={r} adalah {hasil:.2f}"

print(output)

# simpan ke file (append agar tidak menimpa)
with open("hasil_lingkaran.txt", "a") as file:
    file.write(output + "\n")