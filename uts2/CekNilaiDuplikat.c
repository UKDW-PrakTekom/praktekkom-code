#include <stdio.h>

void findDuplicates(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {3, 5, 7, 3, 8, 7, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("nilai yang duplikat pada array: ");
    findDuplicates(arr, size);
    return 0;
}
