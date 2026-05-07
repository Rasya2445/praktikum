import strutils

# Membaca file teks
with open("artikel.txt", "r", encoding="utf-8") as file:
    text = file.read()

# Analisis
jumlah_kata = strutils.word_count(text)
top_words = strutils.top_n_words(text, 10)

# Output
print("=== HASIL ANALISIS TEKS ===")
print("Jumlah kata :", jumlah_kata)

print("\n10 Kata Terbanyak:")
for word, count in top_words:
    print(f"{word} : {count}")