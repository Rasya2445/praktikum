#include <stdio.h>

int main() {
    int daftar_angka[] = {1, 2, 3, 4, 5, 10, 17, 20};
    int n = sizeof(daftar_angka) / sizeof(daftar_angka[0]);

    FILE *file = fopen("hasil.txt", "w"); // overwrite

    for (int i = 0; i < n; i++) {
        int angka = daftar_angka[i];

        if (angka % 2 == 0) {
            printf("Bilangan %d adalah GENAP\n", angka);
            fprintf(file, "Bilangan %d adalah GENAP\n", angka);
        } else {
            printf("Bilangan %d adalah GANJIL\n", angka);
            fprintf(file, "Bilangan %d adalah GANJIL\n", angka);
        }
    }

    fclose(file);
    return 0;
}