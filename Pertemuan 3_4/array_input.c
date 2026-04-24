#include <stdio.h>

int main() {
    int angka[10];
    int terbesar;
    int i;

    // Input 10 angka
    for(i = 0; i < 10; i++) {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }

    // Angka pertama dianggap terbesar sementara
    terbesar = angka[0];

    // Cari angka terbesar
    for(i = 1; i < 10; i++) {
        if(angka[i] > terbesar) {
            terbesar = angka[i];
        }
    }

    // Output hasil
    printf("Angka terbesar adalah: %d\n", terbesar);

    return 0;
}