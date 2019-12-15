#include <stdio.h>
main(){
	int i,a,b,c;
	while(1){

	printf("Enter number : ");
	scanf("%d",&i);
	
	for(a=0;a<i*2;a=a+2){
		for(b=i;b>(a/2)+1;b--){
			printf(" ");				
		}
		for(b=0;b<=a;b++){
			printf("*");				
		}
		
			printf("\n");		
	}
}
}
