#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char *str = "Hallo Kelas Praktikum Tekom";
    int length = stringLength(str);

    printf("Panjang String: %d\n", length);

    return 0;
}