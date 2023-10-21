#include<stdio.h>
int main (){
 	int a,b,c,d,pagi,sore;
 	printf("masukan waktu ship jam pagi/sore :\n 1.pagi \n 2.sore \n ");
 	scanf("%i",&d);
 	if (d = 1){
 		printf(" pagi\n");
	 }else {
	 	printf(" siang\n");
	 }
	 
	printf("jam masuk : ");
	scanf("%i",&a);
	printf("jam keluar : ");
	scanf("%i",&b);
	
	c = b - a;
	
	printf ("lama bekerja adalah : %i jam",c);
	return 0;
}
