import strutils

def main():
    text = input("Masukkan teks: ")

    print("\n=== HASIL ===")

    # Normalize
    normalized = strutils.normalize_text(text)
    print("Normalize Text :")
    print(normalized)

    # Word count
    total = strutils.word_count(text)
    print("\nJumlah Kata :", total)

    # Top words
    n = int(input("\nTop berapa kata? "))

    top_words = strutils.top_n_words(text, n)

    print("\nTop Words:")
    for word, count in top_words:
        print(f"{word} : {count}")


if __name__ == "__main__":
    main()