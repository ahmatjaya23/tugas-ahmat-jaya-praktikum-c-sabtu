#include <stdio.h>

int main() {
    int array[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int indeks = 11;
    // Mengosongkan beberapa indeks di antara data yang ada
    array[1] = 0;  // mengosongkan indeks 1
    array[3] = 0;  // mengosongkan indeks 3
    array[5] = 0;  // mengosongkan indeks 5
    array[7] = 0;  // mengosongkan indeks 7
    array[9] = 0;  // mengosongkan indeks 9
	
    // Menampilkan semua indeks, termasuk yang dikosongkan
    printf("A = [");
    for (int i = 0; i < indeks; ++i) {
        if (array[i] != 0) {
            printf(" %d ", array[i]);
        } else {
            printf(" ... ");  // Menandai indeks yang dikosongkan
        }
    }
    printf("]\n");

	printf("\n");
    printf("  AAAAA  H   H  MMM MMM   AAAAA  TTTTT\n");
    printf("  A   A  H   H  M M M M   A   A    T  \n");
    printf("  AAAAA  HHHHH  M  M  M   AAAAA    T  \n");
    printf("  A   A  H   H  M     M   A   A    T  \n");
    printf("  A   A  H   H  M     M   A   A    T  \n");

    return 0;
}

