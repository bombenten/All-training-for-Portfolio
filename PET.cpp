#include <stdio.h>
main(){
	
	int n,i,j,k;
	int a,b,c,d;
	int result[10],max,od;
	
	max = 0 ;
	
	for(i=0;i<5;i++){
		printf("[%d] : ",i+1);
		scanf("%d %d %d %d",&a,&b,&c,&d);
		result[i] = a+b+c+d ;
	
		if(result[i]>=max){
			max = result[i];
			od = i+1 ;
		}
		
	}
	
	printf("Number : [%d] \nVote is : [%d]",od,max);
	
}
