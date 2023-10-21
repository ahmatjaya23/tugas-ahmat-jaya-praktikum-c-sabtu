#include <stdio.h>

int main() 
{
    int bilangan;

    printf("Masukkan sebuah bilangan bulat positif/negatif: ");
    scanf("%d", &bilangan);

    if (bilangan > 0) 
	{
        if (bilangan % 2 == 0) 
		{
            printf("Bilangan %d adalah GENAP\n", bilangan);
        } 
		else 
		{
            printf("Bilangan %d adalah GANJIL\n", bilangan);
        }
    } 
	else if (bilangan < 0) 
	{
        if (bilangan % 2 == 0) 
		{
            printf("Bilangan %d adalah NEGATIF GENAP\n", bilangan);
        } 
		else 
		{
            printf("Bilangan %d adalah NEGATIF GANJIL\n", bilangan);
        }
    } 
    else
    {
    	printf("Bilangan yang anda masukkan salah\n");
	}
    

    return 0;
}
