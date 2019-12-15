#include <stdio.h>
main(){
	
	int i,a,b,c;
	while(1){

	printf("Enter number : ");
	scanf("%d",&i);
	
	for(a=1;a<=(i*2)-1;a++){
		if(a<=i){		
			for(b=i;b>a;b--){
				printf(" ");				
			}
			for(b=1;b<=(a*2)-1;b++){
				printf("*");				
			}
			
				printf("\n");		
		}
		else{
			for(b=0;b<a-i;b++){
				printf(" ");				
			}
			for(b=1;b<=(((2*i)-a)*2-1);b++){
				printf("*");				
			}
			
				printf("\n");				
			 
		
	}
}
	
}
}
