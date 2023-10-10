#include <stdio.h>

int main() {
    float harga, diskon, pembayaran;

    // Meminta pengguna untuk memasukkan harga barang
    printf("Masukkan harga barang: ");
    scanf("%f", &harga);

    // Meminta pengguna untuk memasukkan diskon dalam persen
    printf("Masukkan diskon dalam persen: ");
    scanf("%f", &diskon);

    // Menghitung jumlah diskon dan harga setelah diskon
    float jumlahDiskon = (diskon / 100) * harga;
    float hargaSetelahDiskon = harga - jumlahDiskon;

    // Menghitung jumlah pembayaran yang diperlukan
    printf("Harga sebelum diskon: %.2f\n", harga);
    printf("Jumlah diskon: %.2f\n", jumlahDiskon);
    printf("Jumlah pembayaran: %.2f\n", hargaSetelahDiskon);

    return 0;
}
