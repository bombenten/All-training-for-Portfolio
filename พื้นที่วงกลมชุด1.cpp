#include <stdio.h>

main(){
	float r,re,a=22;
	while(1){
	printf("\n--------------------------------------\n");
	printf("Enter Radius of Circle : ");
	scanf("%f",&r);
	printf("--------------------------------------\n");
	re = a/7*(r*r);
	printf("Area of circle = %f",re);

}
}
