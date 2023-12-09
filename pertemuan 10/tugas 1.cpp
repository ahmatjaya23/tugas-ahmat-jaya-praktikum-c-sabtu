#include <stdio.h>

int main() {
    int A[5] = {12, 8, 17, 5, 15};
    int B[7] = {5, 11, 7, 25, 9, 12, 14};
    int C[12];
    int size_A = 5;
    int size_B = 7;
    int size_C = 0;  // Initialize the size of array C

    // Copy elements from A to C if they are greater than 10
    for (int i = 0; i < size_A; i++) {
        if (A[i] > 10) {
            C[size_C++] = A[i];
        }
    }

    // Copy elements from B to C if they are greater than 10
    for (int i = 0; i < size_B; i++) {
        if (B[i] > 10) {
            C[size_C++] = B[i];
        }
    }

    // Print the elements in array C
    printf("Array C: ");
    for (int i = 0; i < size_C; i++) {
        printf("%d ", C[i]);
    }



    return 0;
}
