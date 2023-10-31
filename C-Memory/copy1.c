#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char s[100]; // Misalnya, kami mengalokasikan 100 karakter untuk string s

    // Get a string using scanf
    printf("s: ");
    scanf("%s", s);

    // Capitalize the first letter if the string is not empty
    if (s[0] != '\0') {
        s[0] = toupper(s[0]);
    }

    // Print the string twice
    printf("s: %s\n", s);
    printf("t: %s\n", s); // Since t is a copy of s, they will be the same

    return 0;
}
