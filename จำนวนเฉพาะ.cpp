/* Program Activity By Thanatorn */
#include <stdio.h>
main(){
	int n,i,m,chk;
	while(1){
		chk=0 , n=0 , m=0 ;
		printf(" Enter your number : ");
		scanf("%d",&n);
		
		for(i=2;i<n;i++){
			m = n % i ;	
			if(m==0){
				chk=1;
				break;
			}
		}
		if(chk==1){
			printf(" %d is not a prime number.\n",n);	
		}
		else{
			printf(" %d is a prime number.\n",n);	
		}
		printf(" ----------------------\n");
	}
}
