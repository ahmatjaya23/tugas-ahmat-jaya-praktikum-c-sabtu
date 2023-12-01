#include <stdio.h>

int main() {
    int A[11]; // array satu dimensi dengan 11 elemen
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35}; // data yang akan diinput
    int j = 0; // indeks untuk array A

    for (int i = 0; i < 11; i++) {
        if (data[i] % 2 == 0) { // hanya nilai genap yang disimpan
            A[j] = data[i];
            j++;
        }
    }

    for (int i = 0; i < j; i++) {
        printf("%d ", A[i]); // mencetak nilai genap dari array A
    }

    return 0;
}
