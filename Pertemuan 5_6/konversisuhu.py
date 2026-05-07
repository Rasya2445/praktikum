print("=== Konversi Suhu ===")
print("1. Celsius ke Fahrenheit & Kelvin")
print("2. Fahrenheit ke Celsius & Kelvin")
print("3. Kelvin ke Celsius & Fahrenheit")

pilihan = int(input("Pilih menu (1/2/3): "))

if pilihan == 1:
    c = float(input("Masukkan suhu Celsius: "))
    f = (c * 9/5) + 32
    k = c + 273.15
    print("Fahrenheit:", f)
    print("Kelvin:", k)

elif pilihan == 2:
    f = float(input("Masukkan suhu Fahrenheit: "))
    c = (f - 32) * 5/9
    k = c + 273.15
    print("Celsius:", c)
    print("Kelvin:", k)

elif pilihan == 3:
    k = float(input("Masukkan suhu Kelvin: "))
    c = k - 273.15
    f = (c * 9/5) + 32
    print("Celsius:", c)
    print("Fahrenheit:", f)

else:
    print("Pilihan tidak valid!")