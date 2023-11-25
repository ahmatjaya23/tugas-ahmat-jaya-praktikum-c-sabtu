#include <stdio.h>

int main() {
    
    double kecepatan = 2.0;  
    int waktu = 100;        

    
    double jarak = kecepatan * waktu;

    
    printf("Jarak yang ditempuh setelah %d detik adalah %.2f meter.\n", waktu, jarak);

    return 0;
}
