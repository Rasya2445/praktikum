// guess_c.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int min = 1, max = 100;
    int secret, guess, attempts = 0;
    srand((unsigned) time(NULL));
    secret = rand() % (max - min + 1) + min;

    printf("Tebak angka antara %d sampai %d!\n", min, max);
    while (1) {
        printf("Masukkan tebakan: ");
        if (scanf("%d", &guess) != 1) {
            // clear invalid input
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
            printf("Input tidak valid, coba lagi.\n");
            continue;
        }
        attempts++;
        if (guess < secret) {
            printf("Terlalu kecil.\n");
        } else if (guess > secret) {
            printf("Terlalu besar.\n");
        } else {
            printf("Benar! Kamu menebak dalam %d percobaan.\n", attempts);
            break;
        }
    }
    return 0;
}
