#include <stdio.h>

int main() {
    double uang = 1000000;
    double bunga = 0.02;
    for (int i = 0; i < 10; i++) {
        uang += uang * bunga;
    }
    printf("Jumlah uang setelah 10 bulan: Rp. %.2f", uang);
    return 0;
}
