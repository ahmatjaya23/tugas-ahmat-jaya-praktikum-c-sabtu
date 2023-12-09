#include <stdio.h>

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char C;

    printf("Masukkan karakter = ");
    scanf("%c", &C);

    int karakter = 0;
    int jumlah_karakter = 0;
    int i = 0;

	// Mencari Karakter menggunakan looping
    while (i < 10) {
        if (A[i] == C) {
            karakter = 1;
            jumlah_karakter++;
        }
        ++i;
    }

    if (karakter) {
        printf("ADA\n");
        printf("%d\n", jumlah_karakter);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}

