#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisi struktur Buku
typedef struct {
    char *judul_buku;
    char *penulis;
} Buku;

// Fungsi untuk menampilkan informasi buku
void InfoBuku(const Buku *buku) {
    if (buku) {
        printf("Judul Buku: %s\n", buku->judul_buku);
        printf("Penulis: %s\n", buku->penulis);
    } else {
        printf("Buku tidak valid.\n");
    }
}

int main() {
    // Mengalokasikan memori untuk struktur Buku
    Buku *buku = (Buku *)malloc(sizeof(Buku));
    
    // Mengalokasikan memori untuk judul buku dan penulis
    buku->judul_buku = (char *)malloc(100); // Asumsikan judul buku dapat menampung hingga 100 karakter
    buku->penulis = (char *)malloc(50); // Asumsikan penulis dapat menampung hingga 50 karakter
    
    // Mengisi data buku
    strcpy(buku->judul_buku, "Judul Buku Contoh");
    strcpy(buku->penulis, "Penulis Contoh");

    // Memanggil fungsi InfoBuku untuk menampilkan informasi buku
    InfoBuku(buku);

    // Menghapus memori yang dialokasikan
    free(buku->judul_buku);
    free(buku->penulis);
    free(buku);
    
    return 0;
}
