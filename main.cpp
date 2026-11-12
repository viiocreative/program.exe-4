#include <iostream>
#include <cstdlib> // Diperlukan untuk menggunakan system("pause")

using namespace std;

// Fungsi untuk menentukan predikat huruf berdasarkan nilai
char cekPredikat(int nilai) {
    if (nilai > 90) {
        return 'A';
    } else if (nilai > 80) {
        return 'B';
    } else if (nilai > 70) {
        return 'C';
    } else {
        return 'D'; // Untuk nilai 70 ke bawah (di bawah nilai 70)
    }
}

int main() {
    int nilai;

    cout << "====================================\n";
    cout << "       PROGRAM CEK NILAI HURUF      \n";
    cout << "====================================\n";
    cout << "Masukkan nilai angka (0-100): ";
    cin >> nilai;

    // Validasi sederhana agar input berada dalam rentang wajar
    if (nilai < 0 || nilai > 100) {
        cout << "Nilai tidak valid! Masukkan rentang 0 sampai 100.\n";
    } else {
        char predikat = cekPredikat(nilai);
        cout << "------------------------------------\n";
        cout << "Nilai Anda    : " << nilai << "\n";
        cout << "Predikat Huruf: " << predikat << "\n";
        cout << "====================================\n";
    }

    // Sistem pause agar jendela tidak langsung menutup (khusus Windows)
    system("pause");

    return 0;
}
