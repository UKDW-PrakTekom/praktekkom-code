#include <stdio.h>

int main() {
    char str[100]; // Misalkan, string memiliki panjang maksimum 100 karakter
    int length = 0;

    printf("Masukkan sebuah string: ");
    //scanf("%s", str);
    scanf(" %99[^\n]", str); // Menerima seluruh baris (termasuk spasi) ke dalam 'str'

    // Menghitung panjang string dengan loop
    while (str[length] != '\0') {
        length++;
    }

    printf("Panjang string: %d\n", length);

    return 0;
}
