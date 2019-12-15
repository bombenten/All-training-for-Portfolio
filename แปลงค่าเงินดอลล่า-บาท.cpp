#include <stdio.h>
int main(){
	while (1){
	float thb,usd;
	printf("\n***********************************");
	printf("\nenter thai Baht: ");
	scanf("%f",&thb);
	usd = thb/30.81;
	printf("your %.2f thb is equal to %.2f usd",thb,usd);
}
}
