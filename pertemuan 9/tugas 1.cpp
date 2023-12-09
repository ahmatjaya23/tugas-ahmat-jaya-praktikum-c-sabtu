#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N;

    printf("Masukkan nilai integer N: ");
    scanf("%d", &N);

    int found = 0;
    int i = 0;

    while (i < 11) {
        if (A[i] == N) {
            found = 1;
            break; // Keluar dari loop jika nilai ditemukan
        }
        ++i;
    }

    if (found) {
        printf("ADA\nLokasi bilangan yang sama di index ke");
        i = 0;
        while (i < 11) {
            if (A[i] == N) {
                printf(" %d", i);
            }
            ++i;
        }
        printf("\n");
    } else {
        printf("TIDAK ADA. Nilai %d tidak ditemukan dalam array.\n", N);
    }

    return 0;
}

