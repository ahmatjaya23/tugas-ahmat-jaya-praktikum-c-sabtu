#include <stdio.h>

int main() {
    int array[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int indeks = sizeof(array) / sizeof(array[0]);

    // Menampilkan bilangan ganjil saja
    printf("A = [");
    int count = 0;
    for (int i = 0; i < indeks; ++i) {
        if (array[i] % 2 != 0 && array[i] != 999) {
            if (count > 0) {
                printf(",");
            }
            printf("%d", array[i]);
            count++;
        }
    }
    printf(",...");
    for (int i = count + 1; i < 11; ++i) {
        printf(",...");
    }
    printf("]\n");

    return 0;
}
