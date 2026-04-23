def tentukan_grade(nilai):
    if nilai >= 85:
        return "A"
    elif nilai >= 70:
        return "B"
    elif nilai >= 60:
        return "C"
    elif nilai >= 50:
        return "D"
    else:
        return "E"

n = int(input("Masukkan jumlah mahasiswa: "))

with open("data_mahasiswa.txt", "w") as file:
    for i in range(n):
        print(f"\nMahasiswa ke-{i+1}")
        nama = input("Masukkan nama: ")
        nilai = float(input("Masukkan nilai: "))
        
        grade = tentukan_grade(nilai)

        hasil = f"Nama: {nama} | Nilai: {nilai} | Grade: {grade}"
        print(hasil)

        file.write(hasil + "\n")