#include<stdio.h>

int main()
{
	int celcius;
	float fahrenheit,reamur;
	printf("PROGRAM KONVERSI SUHU SEDERHANA \n\n");
	printf("input suhu dalam celcius :");
	scanf("%i,&celcius");
	
	fahrenheit=(celcius*1.8)+32;
	reamur=(celcius*0.8);
	
	printf("fahrenheit=%.1F\n",fahrenheit);
	printf("reamur=%.1FR\n",reamur);
	
	return 0;
}
