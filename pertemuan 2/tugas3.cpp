#include<stdio.h>
#include <math.h>
int main()
{
	
	float alas, tinggi, sisimiring;
	
	printf("masukan panjang sisi alas (cm):");
	scanf("%",& alas);
	
	printf("masukan panjang sisi tinggi (cm):");
	scanf("%f", & tinggi);
	
	sisimiring = sqrt(alas * + tinggi * tinggi );
	
	printf("panjang sisi miring segitiga siku-siku adalah: %2f cm\n", sisimiring);
	
	return 0;
	
}
