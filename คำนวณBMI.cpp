#include <stdio.h>
main(){
	
	float bmi,a,b;
	int age;	
	
	printf("Name : ");
	scanf("%s");
	printf("Age : ");
	scanf("%d",&age);
	printf("Gender : ");
	scanf("%s");
	printf("Class : ");
	scanf("%s");
	printf("Room : ");
	scanf("%s");
	printf("ID Number : ");
	scanf("%s");
	printf("Class Number : ");
	scanf("%s");
	printf("Height : ");
	scanf("%f",&a);
	printf("Weight : ");
	scanf("%f",&b);
	bmi = (b*b)/a;
	printf("BMI : %f\n",bmi);
	
}
