#include <stdio.h>
main(){

	char b[100],p[100];
	int i,x[100],o,d;
	
	printf("Enter your number : ");
	scanf("%s",b);
	
	for(i = 0;i<13;i++){
		x[i] = b[i]-48;
//		printf("%d\n",x[i]);
	}
	
	o = (13*x[1-1] + 12*x[2-1] + 11*x[3-1] + 10*x[4-1] + 9*x[5-1] + 8*x[6-1] + 7*x[7-1] + 6*x[8-1] + 5*x[9-1] + 4*x[10-1] + 3*x[11-1] + 2*x[12-1]) % 11 ;
	
//	printf("%d",o);
	
	if(o<=1){
		d = 1 - o ;
	}
	else if(o>1){
		d = 11 - o ;
	}
	
//	printf("\n%d",d);
	
	if(d!=x[12]){
		printf("ID Card Not Match");
	}
	else if(d==x[12]){
		printf("ID Card Match");
	}
	
}
