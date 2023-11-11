#include <stdio.h>

// Fungsi untuk simulasi motor listrik utama
void putarMotorUtama() {
    printf("Motor Utama Berputar 180 Derajat\n");
}

// Fungsi untuk simulasi motor listrik lengan tungkai
void putarMotorTungkai() {
    printf("Motor Tungkai Berputar 45 Derajat\n");
}

// Fungsi untuk simulasi motor listrik jari robot
void gerakMotorJari() {
    printf("Motor Jari Bergerak Mendekati Objek\n");
}

// Fungsi untuk simulasi proses pengelasan
void prosesPengelasan(int ketebalan, int waktu) {
    printf("Pengelasan pada ketebalan %d mm. Waktu: %d detik\n", ketebalan, waktu);
}

int main() {
    // Array ketebalan pengelasan
    int ketebalan[] = {6, 8, 12, 24, 30, 36, 42, 49, 50};
    int ukuran = sizeof(ketebalan) / sizeof(ketebalan[0]);
    int waktu[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Tombol Start ditekan
    putarMotorUtama();

    // Pengulangan untuk setiap ketebalan pengelasan
    for (int i = 0; i < ukuran; i++) {
        // Hitung nilai tengah
        int nilaiTengah = ketebalan[i];

        // Motor listrik utama pindah ke nilai tengah
        printf("Motor Utama Pindah ke Nilai Tengah %d\n", nilaiTengah);

        // Motor listrik lengan tungkai aktif
        putarMotorTungkai();

        // Motor listrik jari robot mendekati objek
        gerakMotorJari();

        // Proses pengelasan sesuai ketebalan dan waktu
        prosesPengelasan(ketebalan[i], waktu[i]);

        // Proses selesai, ulangi untuk ketebalan berikutnya
    }

    return 0;
}
