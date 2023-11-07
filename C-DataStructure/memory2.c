#include <stdio.h>
#include <stdlib.h>

int main() {
    int m;
    int* a;
    int* b = malloc(sizeof(int));

    a = &m;
    a = b;

    m = 10;
    *b = m + 2;

    printf("Nilai m: %d\n", m);
    printf("Nilai yang ditunjuk oleh a: %d\n", *a);
    printf("Nilai yang ditunjuk oleh b: %d\n", *b);

    free(b);

    *a = 11;

    printf("Setelah membebaskan memori b:\n");
    printf("Nilai yang ditunjuk oleh a: %d\n", *a);
    printf("Karena b telah dibebaskan, operasi ini dapat menghasilkan undefined behavior.\n");

    return 0;
}
