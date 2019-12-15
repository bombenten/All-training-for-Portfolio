#include <stdio.h>
#include <math.h>
main(){
	
	float n,p;
	
	printf("Enter your number : ");
	scanf("%f",&n);
	printf("Enter your power : ");
	scanf("%f",&p);

	
	printf(" %.0f POWER %.0f = %.2f",n,p,pow(n,p));
	
}
