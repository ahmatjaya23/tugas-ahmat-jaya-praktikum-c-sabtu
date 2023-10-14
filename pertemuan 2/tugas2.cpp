#include <stdio.h>

int main()
{
	int diameter;
	float luas,keliling;diameter = 15;
	
	luas = 3.14 * diameter * diameter;
	keliling = 2 * 3.14 * diameter;
	
	printf("LUAS dan KELILING LINGKARAN") ;
	printf("\njari - jari =%i", diameter);
	printf("\nLUAS = %.3f",luas) ;
	
	return 0;
	
}
