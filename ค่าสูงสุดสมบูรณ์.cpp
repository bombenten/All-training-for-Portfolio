#include <stdio.h>
main(){
	float a,b,c;
	while(1){
	printf("--------------\n");
	printf("Enter A : ");
	scanf("%f",&a);
	printf("Enter B : ");
	scanf("%f",&b);
	printf("Enter C : ");
	scanf("%f",&c);
	
	if(a>b){
		if(a>c){
			printf("Max is A\n");
		}
		
	}
	if(b>c){
		if(b>a){
			printf("Max is B\n");
		}
		
	}
	if(c>a){
		if(c>b){
			printf("Max is C\n");
		}
	
	}
	if(a==c){
		if(a>b){
		printf("Max is A and C\n");
		}
	}
	if(b==a){
		if(b>c){
		printf("Max is A and B\n");
		}
	}
	if(c==b){
		if(c>a){
		printf("Max is B and C\n");
		}
	}
}
}
