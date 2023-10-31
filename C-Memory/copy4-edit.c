//semua input jadi besar

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char s[100]; // Misalnya, kami mengalokasikan 100 karakter untuk string s

    // Get a string using scanf
    printf("s: ");
    scanf("%s", s);

    // Mengonversi semua karakter string ke huruf besar
    for (int i = 0; s[i]; i++) {
        s[i] = toupper((unsigned char)s[i]);
    }

    printf("s (semua huruf besar): %s\n", s);

    return 0;
}
