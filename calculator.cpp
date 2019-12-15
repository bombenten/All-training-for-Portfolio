#include<stdio.h>
int main()
{
	while (1){
	
	float a,b,c,i;
	printf("\n*************************************************");
	printf("\nInput first number: ");
	scanf("%f",&a);
	printf("Input second number: ");
	scanf("%f",&b);
	printf("Choice \n 1=+    2=- \n 3=x    4=/ \n Your choice: ");
	scanf("%f",&i);
	if(i==1){
		c=a+b;
		printf("result of %.2f + %.2f is %.2f",a,b,c);
	}
	else if(i==2){
		c=a-b;
		printf("result of %.2f - %.2f is %.2f",a,b,c);
	}
	else if(i==3){
		c=a*b;
		printf("result of %.2f x %.2f is %.2f",a,b,c);
	}
	else if(i==4){
		c=a/b;
		printf("result of %.2f / %.2f is %.2f",a,b,c);
	}
	else{
		printf("not in choice");
	}
}
}
