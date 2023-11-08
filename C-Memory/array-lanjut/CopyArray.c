#include <stdio.h>

void copyArray(int *source, int *destination, int size) {
   for (int i = 0; i < size; i++) {
        destination[i] = source[i];
    }
}

int main() {
    int source[] = {1, 2, 3, 4, 5};
    int destination[5];
    int size = sizeof(source) / sizeof(source[0]);

    copyArray(source, destination, size);
    
    printf("Array yang disalin: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}
