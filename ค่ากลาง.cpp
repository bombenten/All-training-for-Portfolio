#include <stdio.h>
main(){
	int a,b,c;
	while(1){
	
	printf("\n-----------------------------\n");
	printf("Enter Number [1] : ");
	scanf("%d",&a);
	printf("Enter Number [2] : ");
	scanf("%d",&b);
	printf("Enter Number [3] : ");
	scanf("%d",&c);
	printf("-----------------------------\n");
	
	if(a>b){
		if(b>c){
			printf("Middle Number = %d",b);
		}
		else{
			if(c>a){
				printf("Middle Number = %d",a);
			}
			else{
				printf("Middle Number = %d",c);
			}
		}
		
	}
	else{
		if(a>c){
			printf("Middle Number = %d",a);
		}
		else{
			if(c>b){
				printf("Middle Number = %d",b);
			}
			else{
				printf("Middle Number = %d",c);
			}
		}
	}
	
}
}
