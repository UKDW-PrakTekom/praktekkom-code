#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char s[100]; // Misalnya, kami mengalokasikan 100 karakter untuk string s

    // Get a string using fgets
    printf("s: ");
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 1; // Handle input error
    }

    // Menghapus karakter newline (\n) jika ada
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }

    // Allocate memory for another string
    char *t = (char *)malloc(strlen(s) + 1);

    if (t == NULL) {
        return 1; // Handle allocation error
    }

    // Copy string into memory using strcpy
    strcpy(t, s);

    // Capitalize the copy
    if (strlen(t) > 0) {
        t[0] = toupper(t[0]);
    }

    // Print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // Free memory
    free(t);
    return 0;
}
