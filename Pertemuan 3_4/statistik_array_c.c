#include <stdio.h>

// Fungsi sorting sederhana (Bubble Sort)
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Fungsi menghitung mean
float hitungMean(int arr[], int n) {
    int sum = 0, i;
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

// Fungsi menghitung median
float hitungMedian(int arr[], int n) {
    if(n % 2 == 0) {
        return (arr[n/2 - 1] + arr[n/2]) / 2.0;
    } else {
        return arr[n/2];
    }
}

// Fungsi menghitung mode
int hitungMode(int arr[], int n) {
    int mode = arr[0];
    int maxCount = 1;

    for(int i = 0; i < n; i++) {
        int count = 1;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }

    return mode;
}

int main() {
    int n;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int arr[n];

    // Input data
    for(int i = 0; i < n; i++) {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Sorting array untuk median dan mode
    bubbleSort(arr, n);

    // Tampilkan array setelah sorting
    printf("\nData setelah sorting: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Hitung statistik
    float mean = hitungMean(arr, n);
    float median = hitungMedian(arr, n);
    int mode = hitungMode(arr, n);

    // Output hasil
    printf("\n\nMean   = %.2f", mean);
    printf("\nMedian = %.2f", median);
    printf("\nMode   = %d\n", mode);

    return 0;
}