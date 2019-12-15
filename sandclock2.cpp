#include <stdio.h>
main(){
	
	int i,n,a,b,j,x;
	
	printf("Enter your number : ");
	scanf("%d",&n);
	
	a = 1;
	b =	n;
	
	
	for(i=1;i<=n;i++){
		if(i==1||i==n){
			for(j=0;j<n;j++){
				printf("*");
			}		
		}
		else{
			for(x=1;x<=n;x++){
				if(x==a||x==b){
					printf("*");
				}
				else{
					printf(" ");	
				}		
				
		}				
		}
		
		a= a+1;
		b= b-1;
		
		printf("\n");
		
		
		
	}
	
}
