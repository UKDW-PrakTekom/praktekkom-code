#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisi struktur Person
typedef struct {
    int nik;
    char nama[30];
    char alamat[100];
} Person;

// Fungsi untuk menampilkan informasi Person
/*void InfoPerson(const Person *person) {
    if (person) {
        printf("NIK: %d\n", person->nik);
        printf("Nama: %s\n", person->nama);
        printf("Alamat: %s\n", person->alamat);
    } else {
        printf("Data Person tidak valid.\n");
    }
}*/

int main() {
    // Mengalokasikan memori untuk struktur Person
    Person *person = (Person *)malloc(sizeof(Person));
    
    if (person) {
        // Mengisi data Person
        person->nik = 12345;
        strcpy(person->nama, "Nama Person Contoh");
        strcpy(person->alamat, "Alamat Person Contoh");

        // Memanggil fungsi InfoPerson untuk menampilkan informasi Person
        //InfoPerson(person);

        printf("NIK: %d\n", person->nik);
        printf("Nama: %s\n", person->nama);
        printf("Alamat: %s\n", person->alamat);

        // Menghapus memori yang dialokasikan
        free(person);
    } else {
        printf("Gagal mengalokasikan memori untuk Person.\n");
    }

    return 0;
}
