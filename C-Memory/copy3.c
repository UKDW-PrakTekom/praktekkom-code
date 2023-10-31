#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char s[100]; // Misalnya, kami mengalokasikan 100 karakter untuk string s

    // Get a string using scanf
    printf("s: ");
    scanf("%s", s);

    // Allocate memory for another string
    char *t = (char *)malloc(strlen(s) + 1);

    if (t == NULL) {
        return 1; // Handle allocation error
    }

    // Copy string into memory, including '\0'
    for (int i = 0, n = strlen(s); i <= n; i++) {
        t[i] = s[i];
    }

    // Capitalize copy
    t[0] = toupper(t[0]);
    

    // Print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t); // Free the dynamically allocated memory

    return 0;
}
