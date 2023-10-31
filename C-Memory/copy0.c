// Capitalizes a string

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100]; // Misalnya, kami mengalokasikan 100 karakter untuk string s

    // Get a string using scanf
    printf("s: ");
    scanf("%s", s);

    // Capitalize the first letter
    if (s[0] != '\0') {
        s[0] = toupper(s[0]);
    }

    // Print the string twice
    printf("s: %s\n", s);

    return 0;
}