#include <stdio.h>

int main() {
    int arr[] = {1, 2, 7, 9, 4, 6, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Nilai maksimum dalam array: %d\n", max);

    return 0;
}
