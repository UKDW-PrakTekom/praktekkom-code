// Demonstrates memory errors via valgrind

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[1] = 72;
    x[2] = 73;
    x[3] = 33;

    printf("x[0]: %d\n", x[0]);
    printf("x[1]: %d\n", x[1]);
    printf("x[2]: %d\n", x[2]);
    printf("x[3]: %d\n", x[3]);

    // Free the allocated memory
    free(x);

    return 0;
}