#include <stdio.h>

char tentukan_grade(float nilai) {
    if (nilai >= 85)
        return 'A';
    else if (nilai >= 70)
        return 'B';
    else if (nilai >= 60)
        return 'C';
    else if (nilai >= 50)
        return 'D';
    else
        return 'E';
}

int main() {
    int n;
    float nilai;
    char nama[50];

    FILE *file = fopen("data_mahasiswa.txt", "w");

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("\nMahasiswa ke-%d\n", i+1);

        printf("Masukkan nama: ");
        scanf(" %[^\n]", nama);

        printf("Masukkan nilai: ");
        scanf("%f", &nilai);

        char grade = tentukan_grade(nilai);

        printf("Nama: %s | Nilai: %.2f | Grade: %c\n", nama, nilai, grade);
        fprintf(file, "Nama: %s | Nilai: %.2f | Grade: %c\n", nama, nilai, grade);
    }

    fclose(file);
    return 0;
}