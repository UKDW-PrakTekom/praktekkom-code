#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct t_buku {
    char title[100];
    char author[50];
} Buku;

void printBooks(Buku *buku) {
    printf("Title: %s\n", buku->title);
    printf("Author: %s\n\n", buku->author);
}


void initBukuBuku(Buku *buku, int jumlah) {
    for (int i = 0; i < jumlah; i++)
    {
        sprintf(buku[i].title, "Book %d", i + 1);
    }
    
}

void printBukuBuku(Buku *buku, int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        printf("Title: %s\n", buku[i].title);
    }
}

void main() {
    Buku *buku = malloc(sizeof(Buku));
    strcpy(buku->author, "Dida");
    strcpy(buku->title, "Praktikum Teknologi Komputer");
    // printBooks(buku);

    int jumlahBuku = 10;
    Buku *bukuBuku = malloc(sizeof(Buku) * jumlahBuku);
    printf("size of bukubuku: %d\n", sizeof(bukuBuku));
    initBukuBuku(bukuBuku, jumlahBuku);
    printBukuBuku(bukuBuku, jumlahBuku);
}