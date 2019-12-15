#include <stdio.h>
main(){
	int a,b,c,m;
	int da,db,dc;
	
	
	while(1){
	printf("------------------------------------\n");
	printf("Enter A Station Position : ");
	scanf("%d",&da);
	printf("Enter B Station Position : ");
	scanf("%d",&db);
	printf("Enter C Station Position : ");
	scanf("%d",&dc);
	printf("Enter Car Position : ");
	scanf("%d",&m);
	printf("------------------------------------\n");
	
	if(m>da){
		a = m - da;
		printf("Distance Form A = : %d\n",a);		
	}
	if(m<da){
		a = da - m;
		printf("Distance Form A = : %d\n",a);		
	}
	if(m>db){
		b = m - db;
		printf("Distance Form B = : %d\n",b);		
	}
	if(m<db){
		b = db - m;
		printf("Distance Form B = : %d\n",b);		
	}
	if(m>dc){
		c = m - dc;
		printf("Distance Form C = : %d\n",c);		
	}
	if(m<dc){
		c = dc - m;
		printf("Distance Form C = : %d\n",c);			
	}
	
	

	
	printf("------------------------------------\n");

	if(a<b){
		if(a<c){
			printf("Nearest Station is A\n");
		}
	}
	if(b<a){
		if(b<c){
			printf("Nearest Station is B\n");
		}		
	}
	if(c<a){
		if(c<b){
			printf("Nearest Station is C\n");
		}	
	}
	
	}
}





