// Capitalizes a copy of a string

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

    // Copy string into memory, including '\0'
    for (int i = 0; i <= strlen(s); i++) {
        t[i] = s[i];
    }

    // Capitalize copy
    t[0] = toupper(t[0]);
    
    

    // Print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    return 0;
}
