#include <stdio.h>

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12], C[12];
    int n = 12; // Jumlah elemen dalam array A
    int sum = 0;
    float average;

    // Menghitung rata-rata nilai mahasiswa dari array A
    for (int i = 0; i < n; i++) {
        sum += A[i];
    }

    average = (float)sum / n;

    // Pemindahan nilai ke array B atau C berdasarkan nilai rata-rata
    int indexB = 0, indexC = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > average) {
            B[indexB++] = A[i];
        } else {
            C[indexC++] = A[i];
        }
    }

    // Menampilkan isi array A
    printf("Array A: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    // Menampilkan isi array B
    printf("\nArray B: ");
    for (int i = 0; i < n; i++) {
        if (i < indexB) {
            printf("%d ", B[i]);
        } else {
            printf("0 "); // Menampilkan 0 untuk elemen yang tidak terisi
        }
    }

    // Menampilkan isi array C
    printf("\nArray C: ");
    for (int i = 0; i < n; i++) {
        if (i < indexC) {
            printf("%d ", C[i]);
        } else {
            printf("0 "); // Menampilkan 0 untuk elemen yang tidak terisi
        }
    }

    return 0;
}

