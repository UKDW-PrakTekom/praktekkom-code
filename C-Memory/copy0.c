// Capitalizes a string

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string
    char s[100];
    char t[];
    printf("s: ");
    scanf("%c", s);

    // Copy string's address
    t = s;

    // Capitalize first letter in string
    t= toupper(t);

    // Print string twice
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}