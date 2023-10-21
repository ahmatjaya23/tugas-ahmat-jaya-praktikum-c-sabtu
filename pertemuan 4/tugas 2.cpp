#include <stdio.h>

 
int main(void)  {

   // Deklarasi variabel N dengan tipe integer (int)

   int N;  

   // Gunakan fungsi scanf untuk mendapatkan input integer untuk variabel N
	printf("Masukkan bilangan: ");
	scanf("%d", &N);

   // Conditional Statement if-else untuk N

   if(N > 50)  
   	{

       N = N + 10;
	}  
   else  
   {
       N = N - 25;
   }  
   // Cetak output variabel N dengan fungsi printf

   printf("%d", N);

   return 0;
}
