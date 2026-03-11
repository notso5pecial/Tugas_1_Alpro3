// Soal ini dijawab menggunakan bahasa C, tapi tidak apa-apa jika menggunakan extension CPP

/* 
Buat program yang meminta pengguna memasukkan sebuah kata (terdiri dari minimal 10 karakter), 
lalu tampilkan karakter per karakter menggunakan putchar().
*/

#include <stdio.h>
int main () {
    char kata[100];  // Array karakter untuk menyimpan input kata (maks 100 karakter)
    int panjang;     // Variabel untuk menyimpan panjang kata
    
    // Loop do-while: minimal dijalankan 1 kali, terus berulang jika kata < 10 karakter
    do {
        printf("Masukkan sebuah kata (minimal 10 karakter): ");
        scanf("%s", &kata);  // Membaca input string dari pengguna
        
        // Menghitung panjang kata secara manual (tanpa strlen)
        // Mulai dari indeks 0, terus tambah selama belum ketemu '\0' (akhir string)
        panjang = 0;
        while (kata[panjang] != '\0') {
            panjang++;
        }

        // Validasi: jika panjang kurang dari 10, tampilkan pesan error
        if (panjang < 10) {
            printf("Kata terlalu pendek! Panjang kata: %d karakter.\n", panjang);
            printf("Minimal 10 karakter. Mohon coba lagi!\n\n");
        }
    } while (panjang < 10);  // Kondisi pengulangan: ulangi jika panjang masih < 10
    
    // Setelah loop selesai, kata sudah valid (>= 10 karakter)
    printf("Kata yang dimasukkan : %s\n", kata);
    printf("Jumlah karakter      : %d\n", panjang);
    
    printf("Output karakter per karakter:\n");

    // Loop for: mencetak setiap karakter satu per satu berdasarkan indeksnya
    // i mulai dari 0 (indeks pertama array) sampai i < panjang (indeks terakhir)
    for (int i = 0; i < panjang; i++) {
        printf("Karakter ke-%2d : ", i + 1);  // Tampilkan nomor urut (mulai dari 1)
        putchar(kata[i]);  // Cetak karakter pada indeks ke-i
        putchar('\n');     // Pindah ke baris baru setelah tiap karakter
    }

    return 0;
}
