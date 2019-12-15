#include <stdio.h>
main(){
	
	int i,n,j,k,l;
	
	printf("Enter your number : ");
	scanf("%d",&n);
	
	
	for(i=n;i>=1;i--){
		for(j=0;j<i-1;j++){
			printf(" ");
		}		
	
		for(k=0;k<=n-i;k++){

				printf("*");
				printf(" ");
			}


		printf("\n");
		
		
	}
}
