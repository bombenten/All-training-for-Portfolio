#include <stdio.h>
main(){
	
	int i,n,j,a,b,r,g;
	
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	
		if(a>=b){
			i = a / b ;
			if(i*b!=a){
				if(i*b==b){
					printf("");
					j = a * b / 2 ;
				}
				else{
					j = a * b ;
				}
				
				for(r=0;r<=100;r=(r+j)){
					if(r==0){
						printf("");
					}
					else{
						printf("%d \n",r);
					}
						
				}	
			}
			if(i*b==a){
				j = a ;
				for(r=0;r<=100;r=r+j){
					if(r==0){
						printf("");
					}
					else{
						printf("%d \n",r);
					}
				}	
			}
		}
		else{
			i = b / a ;
			if(i*a!=b){
				if(i*a==a){
					printf("");
					j = b * a / 2 ;
				}
				else{
					j = b * a ;
				}
//				j = b * a ;
				for(r=0;r<=100;r=r+j){
					if(r==0){
						printf("");
					}
					else{
						printf("%d \n",r);
					}
				}	
			}
			if(i*a==b){
				j = b ;
				for(r=0;r<=100;r=r+j){
					if(r==0){
						printf("");
					}
					else{
						printf("%d \n",r);
					}
				}	
			}
			
		}
	
}
