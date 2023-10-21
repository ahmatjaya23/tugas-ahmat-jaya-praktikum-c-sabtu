#include <stdio.h>

 
int main(void)  {

   int N;  

	printf("Masukkan bilangan: ");
	scanf("%d", &N);

   if(N > 50)  
   	{

       N = N - 25;
       N = N + 10;
	}  
	else {
		printf("Bilangan yang anda masukkan salah: ");
	}

	
   printf("%d", N);

   return 0;
}
