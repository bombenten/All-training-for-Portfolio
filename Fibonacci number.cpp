#include <stdio.h>
main(){
	
	int i,j,k,n;
	int a,b,c;
	
	a=0;
	b=1;
	printf("Enter number : ");
	scanf("%d",&n);
	
	if(n>=1){
		printf("0 ");
	}
	if(n>=2){
		printf("1 ");
	}
	for(i=0;i<n-2;i++){
		
		c = a + b ;
		printf("%d ",c);
		a = b ;
		b = c ;
	}
}
