#include <stdio.h>
main(){
	
	int n,i,j,k;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=12;i++){
		printf("%d x %d = ",n,i);
		j = n * i ;
		printf("%d",j);
		
		printf("\n");
		
	}
	
}
