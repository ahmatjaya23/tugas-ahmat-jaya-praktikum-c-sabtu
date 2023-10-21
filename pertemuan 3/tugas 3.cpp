#include<stdio.h>

int main()
{
	int alas;
	int tinggi;
	float luas;
	
	printf("masukan panjang alas:");
	scanf("%d,&alas");
	printf("masukan tinggi");
	scanf("%d,&tinggi");
	
	luas=0.5*alas*tinggi;
	printf("luas segitiga adalah %g cm",luas);
	
	return 0;
	
}
