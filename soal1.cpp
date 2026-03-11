// Soal ini dijawab menggunakan bahasa C, tapi tidak apa-apa jika menggunakan extension CPP

/* 
Buat program yang meminta pengguna memasukkan sebuah kata (terdiri dari minimal 10 karakter), 
lalu tampilkan karakter per karakter menggunakan putchar().
*/

#include <stdio.h> //untuk menggunakan printf() dan scanf()
#include <conio.h> // untuk menggunakan getche() dan getch()

int main(){ // fungsi utama program
    char karakter1, karakter2, karakter3; // deklarasi variabel untuk menyimpan karakter yang dimasukkan
    printf("Masukkan karakter 1: "); // meminta pengguna untuk memasukkan karakter
    karakter1 = getchar(); // getchar untuk membaca karakter
    printf("Masukkan karakter 2: ");
    karakter2 = getche(); // getche() untuk membaca karakter dan menampilkannya langsung
    printf("\nMasukkan karakter 3: ");
    karakter3 = getch(); // getch() untuk membaca karakter ketiga tanpa menampilkannya di layar (biasanya digunakan untuk password)
    printf("\nKarakter yang dimasukkan: %c, %c, %c", karakter1, karakter2, karakter3); // menampilkan karakter yang telah dimasukkan
    return 0; // mengembalikan nilai 0 untuk menandakan program selesai dengan sukses
}
