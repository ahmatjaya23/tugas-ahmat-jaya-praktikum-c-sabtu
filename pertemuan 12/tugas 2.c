#include <stdio.h>

int main() {
    char A[11] = {'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};

    // Inisialisasi variabel untuk menghitung jumlah huruf
    int count[26] = {0};
    int maxCount = 0;
    char mostFrequent;
    int i;

    // Menghitung jumlah setiap huruf dalam array A
    for (  i = 0; i < 10; i++) {
        if (A[i] >= 'A' && A[i] <= 'Z') {
            count[A[i] - 'A']++;
            if (count[A[i] - 'A'] > maxCount) {
                maxCount = count[A[i] - 'A'];
                mostFrequent = A[i];
            }
        }
    }

    // Menampilkan hasil
    printf("Array A: ");
    int i2;
    for ( i2 = 0; i2 < 10; i2++) {
        printf("%c ", A[i2]);
    }

    printf("\nHuruf yang paling sering muncul: %c\n", mostFrequent);
    printf("Jumlah huruf tersebut: %d\n", maxCount);

    return 0;
}
