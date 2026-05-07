# Program input 5 nilai dan menghitung rata-rata

nilai = []

# Input 5 nilai
for i in range(5):
    angka = float(input(f"Masukkan nilai ke-{i+1}: "))
    nilai.append(angka)

# Menghitung total nilai
total = sum(nilai)

# Menghitung rata-rata
rata_rata = total / len(nilai)

# Menampilkan hasil
print("\nDaftar Nilai:")
for n in nilai:
    print(n)

print("\nTotal Nilai :", total)
print("Rata-rata   :", rata_rata)