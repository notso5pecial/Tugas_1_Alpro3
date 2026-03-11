// Soal ini dijawab menggunakan bahasa CPP

/*
    Buatlah program yang menerima input satu bilangan bulat (detik) 
    dan menampilkan output dalam format: X detik = H jam M menit S detik
*/

#include <iostream>
using namespace std;

int main() {
    int total_detik, jam, menit, detik;

    // Meminta pengguna memasukkan jumlah detik yang ingin dikonversi
    cout << "Masukkan jumlah detik: ";
    cin >> total_detik;  // Membaca input bilangan bulat dari pengguna

    // Konversi ke jam
    // 1 jam = 3600 detik, gunakan pembagian bulat untuk dapat jumlah jamnya
    // Contoh: 3723 / 3600 = 1 jam
    jam = total_detik / 3600;

    // Konversi ke menit
    // Pertama, ambil sisa detik setelah dikurangi jam (% 3600)
    // Lalu bagi 60 untuk mendapat menitnya
    // Contoh: 3723 % 3600 = 123 sisa detik → 123 / 60 = 2 menit
    menit = (total_detik % 3600) / 60;

    // Konversi ke detik
    // Ambil sisa detik setelah dibagi 60 (detik yang tidak habis jadi menit)
    // Contoh: 3723 % 60 = 3 detik
    detik = total_detik % 60;

    // Menampilkan hasil konversi dalam format: jam, menit, detik
    cout << total_detik << " detik = " << jam   << " jam " << menit << " menit " << detik << " detik" << endl;

    return 0; 
}
