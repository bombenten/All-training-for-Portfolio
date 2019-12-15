#include <stdio.h>
main(){
	int a,b,c;
	
	printf("Please input your height : ");
	scanf("%d",&a);
	
	if(a<=120){
		printf("Your ticket price is 250 bath.");
		
	}
	else{
		printf("Your ticket price is 350 bath.");
	}
}
