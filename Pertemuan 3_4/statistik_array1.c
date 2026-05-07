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
float mean(int arr[], int n) {
    int i, sum = 0;

    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    return (float)sum / n;
}

// Fungsi menghitung median
float median(int arr[], int n) {
    bubbleSort(arr, n);

    if(n % 2 == 0) {
        return (arr[n/2 - 1] + arr[n/2]) / 2.0;
    } else {
        return arr[n/2];
    }
}

// Fungsi menghitung mode
int mode(int arr[], int n) {
    int i, j;
    int maxCount = 0;
    int modeValue = arr[0];

    for(i = 0; i < n; i++) {
        int count = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[j] == arr[i]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            modeValue = arr[i];
        }
    }

    return modeValue;
}

int main() {
    int n, i;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int arr[n];

    // Input data
    for(i = 0; i < n; i++) {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Tampilkan array sebelum sort
    printf("\nData: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Mean
    printf("\nMean   = %.2f", mean(arr, n));

    // Median
    printf("\nMedian = %.2f", median(arr, n));

    // Mode
    printf("\nMode   = %d", mode(arr, n));

    // Array setelah sort
    printf("\n\nData setelah sorting: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}