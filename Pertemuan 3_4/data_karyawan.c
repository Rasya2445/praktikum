#include <stdio.h>
#include <stdlib.h>

// Struct data karyawan
struct Karyawan {
    char nama[50];
    int umur;
    float gaji;
};

int main() {
    int n, i;

    // Input jumlah karyawan
    printf("Masukkan jumlah karyawan: ");
    scanf("%d", &n);

    // Alokasi memori dengan malloc
    struct Karyawan *kar;
    kar = (struct Karyawan*) malloc(n * sizeof(struct Karyawan));

    // Input data karyawan
    for(i = 0; i < n; i++) {
        printf("\nData Karyawan ke-%d\n", i + 1);

        printf("Nama : ");
        scanf(" %[^\n]", (kar + i)->nama);

        printf("Umur : ");
        scanf("%d", &(kar + i)->umur);

        printf("Gaji : ");
        scanf("%f", &(kar + i)->gaji);
    }

    // Menampilkan semua data
    printf("\n=== Data Karyawan ===\n");
    for(i = 0; i < n; i++) {
        printf("\nKaryawan ke-%d\n", i + 1);
        printf("Nama : %s\n", (kar + i)->nama);
        printf("Umur : %d\n", (kar + i)->umur);
        printf("Gaji : %.2f\n", (kar + i)->gaji);
    }

    // Bebaskan memori
    free(kar);

    return 0;
}