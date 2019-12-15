/* Program Activity By Thanatorn */
#include <stdio.h>
main(){
	int x,a,ku,ki,k,i;
	int p[100];
	ku = 0 ;
	ki = 0 ;
	for(i=1;i<=5;i++){
		printf(" Enter Number : ");
		scanf("%d",&p[i]);
		k = p[i] / 2 ;
		
		if(k*2==p[i]){
			printf(" [ Even ]\n",p[i]);
			ku++;
		}
		else if(k*2!=p[i]){
			printf(" [ Odd ]\n",p[i]);
			ki++;
		}	
	}
		printf(" ------------------\n");
		printf(" Odd number = %d\n",ki);
		printf(" Even number = %d\n",ku);
}
