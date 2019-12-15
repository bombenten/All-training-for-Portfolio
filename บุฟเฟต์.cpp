#include <stdio.h>
main(){
	int course,height;
	char gender;
	float p,w,k;
	
	printf("[1]-Basic Course\n");
	printf("[2]-Premium Course\n");
	printf("--------------------------------\n");
	printf("Enter Your Gender : ");
	scanf("%c",&gender);
	printf("Choose Your Course Number : ");
	scanf("%d",&course);
	printf("Enter Your Height : ");
	scanf("%d",&height);
	printf("--------------------------------\n");

	if(course==1){
		if(gender=='m'){
			if(height<=130){
				printf("You are Boy\n");
				k = 299;
				p = k/2;
				printf("Price = %.2f Baht",p);	
			}
			else{
				printf("You are Man\n");
				p = 299;
				printf("Price = %.2f Baht",p);	
			}
		}
		else{
			if(height<=130){
				printf("You are Girl\n");
				w = 299;
				p = w - ((w/100)*20);
				k = p/2;
				printf("Price = %.2f Baht",k);	
			}
			else{
				printf("You are Woman\n");
				w = 299;
				p = w - ((w/100)*20);
				printf("Price = %.2f Baht",p);	
			}
		}
			
	}
	else{
		if(gender=='m'){
			if(height<=130){
				printf("You are Boy\n");
				k = 599;
				p = k/2;
				printf("Price = %.2f Baht",p);	
			}
			else{
				printf("You are Man\n");
				p = 599;
				printf("Price = %.2f Baht",p);	
			}
		}
		else{
			if(height<=130){
				printf("You are Girl\n");
				w = 599;
				p = w - ((w/100)*20);
				k = p/2;
				printf("Price = %.2f Baht",k);	
			}
			else{
				printf("You are Woman\n");
				w = 599;
				p = w - ((w/100)*20);
				printf("Price = %.2f Baht",p);	
			}
		}
			
	}
}


	
	
	
