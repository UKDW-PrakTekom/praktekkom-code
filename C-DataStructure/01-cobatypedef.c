/*
typedef digunakan untuk memberikan alias atau nama alternatif untuk tipe data yang sudah ada. 
Ini digunakan untuk memberikan nama yang lebih deskriptif atau singkat untuk tipe data yang sudah ada.

typedef digunakan ketika Anda ingin memberikan nama alternatif untuk tipe data yang sudah ada, 
baik itu tipe data primitif (seperti int) atau tipe data yang telah Anda definisikan sebelumnya (seperti struct)
*/

#include <stdio.h>

typedef int Mytype;
typedef int MyArr[5];

int main() {
    Mytype var1 = 42; // isialisasi var1 dengan nilai 42
    MyArr arr = {1, 2, 3, 4, 5}; // inisialisasi array dengan nilai-nilai 

    printf("Nilai var1: %d\n", var1);
    
    printf("Nilai-nilai dalam array arr: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[1]);
    }
    printf("\n");

    return 0;
}
