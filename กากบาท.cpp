#include <stdio.h>
main(){
	
	int i,n,b,j;
	
	printf("Enter your number : ");
	scanf("%d",&n);
	
for(b=1;b<(n/2)+1;b++){
		for(i=1;i<=b;i++){
			printf(" ");
		}
			printf("*");

			
		for(j=(n-2*b)-2;j>0;j--){
			printf(" ");
		
		}
		if(j>=0){
			printf("*");
		}

		printf("\n");
	
	}
	
	
	for(b=(n/2);b>1;b--){
		for(i=1;i<b;i++){
			printf(" ");
		}
			printf("*");
			
		for(j=0;j<(n-2*b);j++){
			printf(" ");
		
		}
		
			printf("*");
		

		printf("\n");
	
	}
}
