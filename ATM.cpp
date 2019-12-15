#include <stdio.h>
main(){
	int m;
	
	printf("Enter Cash : ");
	scanf("%d",&m);
	printf("-----------------------------\n");
	
	if(m>=1000){
		printf("Bank Note 1000 = %d\n",m/1000);
		m = m%1000;
	}
	if(m>=500){
		printf("Bank Note 500 = %d\n",m/500);
		m = m%500;
	}
	if(m>=100){
		printf("Bank Note 100 = %d\n",m/100);
	}
	
}
