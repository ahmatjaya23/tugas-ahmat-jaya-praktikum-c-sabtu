#include <stdio.h>

int main() 
    {
    int JamMasuk, JamKeluar, LamaParkir, Biaya;
    char WaktuMasuk, WaktuKeluar;

    printf("Masukkan jam masuk (format 12 jam, A/P): ");
    scanf("%d %c", &JamMasuk, &WaktuMasuk);

    if (WaktuMasuk == 'P' || WaktuMasuk == 'p') {
        JamMasuk += 12;
    }

    printf("Masukkan jam keluar (format 12 jam, A/P): ");
    scanf("%d %c", &JamKeluar, &WaktuKeluar);

    if (WaktuKeluar == 'P' || WaktuKeluar == 'p') {
        JamKeluar += 12;
    }

    LamaParkir = JamKeluar - JamMasuk;

    if (LamaParkir <= 2) {
        Biaya = 2000;
    } else {
        Biaya = 2000 + 500 * (LamaParkir - 2);
    }

    printf("Biaya parkir: %d\n", Biaya);

    return 0;
}
