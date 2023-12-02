#include <stdio.h>

int main() {
    int array[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int indeks[] = {0, 1, 3, 6, 7, 9, 10, 11, 12, 13}; // Sesuaikan dengan urutan yang diinginkan

    // Mengisi array sesuai dengan urutan indeks
    for (int i = 0; i < 11; ++i) {
        if (i == 10) {
            array[indeks[i]] = 0;  // Mengubah nilai pada indeks ke-11 menjadi 0
        } else {
            array[i] = array[indeks[i]];
        }
    }

    // Output hasilnya
    printf("A = [");
    for (int i = 0; i < 11; ++i) {
        if (i > 0) {
            printf(",");
        }

        if (i == 10) {
            printf("...");
        } else {
            printf("%d", array[i]);
        }
    }
    printf("]\n");

    return 0;
}

