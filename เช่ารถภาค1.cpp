#include <stdio.h>
main(){
	
	int a,b,c,d;
	int day,dl,j,i,ra,rb,r;
	
	a=1;
	b=1;
	c=1;
	d=1;
	
	for(day=1;day<8;day++){
		
		printf("\n\tDay [%d]\n",day);	
		printf("Enter day for lent : ");
		scanf("%d",&dl);
		
		printf("Car : ");
		
		if(a<=day&&dl>0){
			a = day + dl;
			printf("A ");
		}
		else if(b<=day&&dl>0){
			b = day + dl;
			printf("B ");			
		}
		else if(c<=day&&dl>0){
			c = day + dl;	
			printf("C ");		
		}
		else if(d<=day&&dl>0){
			d = day + dl;
			printf("D ");		
		}
		else{
			printf("Not enough");			
		}	
		
	}
}
