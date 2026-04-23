#include <stdio.h>

float luas_lingkaran(float r) {
    return 3.14 * r * r;
}

int main() {
    float r;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &r);

    float hasil = luas_lingkaran(r);

    printf("Luas lingkaran dengan r=%.2f adalah %.2f\n", r, hasil);

    FILE *file = fopen("hasil_lingkaran.txt", "a"); // append
    fprintf(file, "Luas lingkaran dengan r=%.2f adalah %.2f\n", r, hasil);
    fclose(file);

    return 0;
}