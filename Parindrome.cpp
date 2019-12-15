/* Program Activity By Thanatorn */
#include <stdio.h>
main(){
	char n[99];
	int i,j,k,a,b;
	while(1){
	printf(" Enter your texts : ");
	scanf("%s",&n);
	
	for(i=0;i<=99;i++){
		if(n[i]=='\0'){
			break;
		}
	}
		a=0;
		b=i-1;
		j=i/2;
		for(k=1;k<=j;k++){
			if(n[a]!=n[b]){
				printf("                  : [ NO ] \n");
				printf(" -------------------------- \n");
				break;
			}
			else{
				printf(" n[a] = %c    ",n[a]);
				printf(" n[b] = %c\n",n[b]);	
				if(k==j){
					printf("                  : [ YES ] \n");
					printf(" -------------------------- \n");
				}
			}				
			a= a+1;
			b= b-1;			
		}
	}
}
