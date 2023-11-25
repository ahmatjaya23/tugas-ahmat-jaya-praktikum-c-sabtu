#include <stdio.h> 
main()
{
int i, N=100;
printf("Kelipatan -5\n"); 
for(i=1; i<=10; i++) {
printf("%4i", N); 
N = N - 5;
}
return 0;
}
