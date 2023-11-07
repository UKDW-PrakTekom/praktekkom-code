/*
struct digunakan untuk mendefinisikan tipe data struktur yang dapat berisi beberapa anggota dengan berbagai tipe data. 
Anda menggunakan struct untuk membuat jenis data khusus yang menggabungkan beberapa variabel dengan tipe data yang berbeda 
ke dalam satu unit yang lebih besar.

struct digunakan ketika Anda ingin mendefinisikan tipe data struktur kustom yang terdiri dari beberapa anggota dengan tipe data yang berbeda
*/

#include <stdio.h>

struct T_MyStruct
{
    int val1;
    char val2;
    char val3[5];
};

int main() {
    struct T_MyStruct myStruct;

    // Mengisi anggota-anggota struktur
    myStruct.val1 = 42;
    myStruct.val2 = 'A';
    myStruct.val3[0] = 'H';
    myStruct.val3[1] = 'e';
    myStruct.val3[2] = 'l';
    myStruct.val3[3] = 'l';
    myStruct.val3[4] = 'o';

    // Mencetak anggota-anggota struktur
    printf("val1: %d\n", myStruct.val1);
    printf("val2: %c\n", myStruct.val2);
    printf("val3: %s\n", myStruct.val3);

    return 0;
}
