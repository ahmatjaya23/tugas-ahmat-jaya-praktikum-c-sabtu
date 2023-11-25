#include <stdio.h>

int main() {
    int n = 10;
    int deret = 1;
    for (int i = 0; i < n; i++) {
        printf("%d ", deret);
        deret *= 2;
    }
    return 0;
}
