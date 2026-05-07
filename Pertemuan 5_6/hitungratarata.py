jumlah_data = int(input("Masukkan jumlah data: "))
total = 0

for i in range(jumlah_data):
    angka = float(input(f"Data ke-{i+1}: "))
    total += angka

rata_rata = total / jumlah_data
print("Rata-rata =", rata_rata)