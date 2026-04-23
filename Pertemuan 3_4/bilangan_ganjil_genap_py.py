# daftar angka otomatis
daftar_angka = [1, 2, 3, 4, 5, 10, 17, 20]

with open("hasil.txt", "w") as file:  # "w" = overwrite
    for angka in daftar_angka:
        if angka % 2 == 0:
            hasil = f"Bilangan {angka} adalah GENAP"
        else:
            hasil = f"Bilangan {angka} adalah GANJIL"
        
        print(hasil)
        file.write(hasil + "\n")