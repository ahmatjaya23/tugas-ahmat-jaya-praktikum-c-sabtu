#include <stdio.h>

int main() {
    int array[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int indeks = 11;
    // Mengosongkan beberapa indeks di antara data yang ada
    array[2] = 0;  // mengosongkan indeks 2
    array[4] = 0;  // mengosongkan indeks 4
    array[5] = 0;  // mengosongkan indeks 5
    array[8] = 0;  // mengosongkan indeks 8
	
    // Menampilkan semua indeks, termasuk yang dikosongkan
    printf("A = [");
    for (int i = 0; i < indeks; ++i) {
        if (array[i] > 9) {
            printf(" %d ", array[i]);
        } else {
            printf(" ... ");  // Menandai indeks yang dikosongkan
        }
    }
    printf("]\n");
    return 0;
}

