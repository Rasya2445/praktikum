#include <stdio.h>

int main() {
    int n = 10; // ukuran tabel
    FILE *file = fopen("tabel.txt", "w");

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("%4d", i * j);
            fprintf(file, "%4d", i * j);
        }
        printf("\n");
        fprintf(file, "\n");
    }

    fclose(file);
    return 0;
}