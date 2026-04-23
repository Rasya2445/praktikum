n = 10  # ukuran tabel (bisa diubah)

with open("tabel.txt", "w") as file:
    for i in range(1, n+1):
        for j in range(1, n+1):
            hasil = f"{i*j:4}"
            print(hasil, end=" ")
            file.write(hasil + " ")
        print()
        file.write("\n")