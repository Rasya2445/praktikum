#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int load_best() {
    FILE *f = fopen("best_hard.txt", "r");
    int score;
    if (f == NULL) return -1;

    fscanf(f, "%d", &score);
    fclose(f);
    return score;
}

void save_best(int score) {
    FILE *f = fopen("best_hard.txt", "w");
    fprintf(f, "%d", score);
    fclose(f);
}

int main() {
    int min = 1, max = 1000;
    int guess, attempts = 0;

    srand(time(NULL));
    int secret = rand() % (max - min + 1) + min;

    int best = load_best();

    printf("Tebak angka antara %d-%d\n", min, max);

    while (1) {
        printf("Masukkan tebakan: ");
        scanf("%d", &guess);

        attempts++;

        if (guess < secret) {
            printf("Terlalu kecil\n");
        } else if (guess > secret) {
            printf("Terlalu besar\n");
        } else {
            printf("Benar! Percobaan: %d\n", attempts);

            if (best == -1 || attempts < best) {
                printf("Best score baru!\n");
                save_best(attempts);
            } else {
                printf("Best score: %d\n", best);
            }
            break;
        }
    }

    return 0;
}