#include <stdio.h>
int main(){
	int n=5;
	int i,nam[n],max,indexmax,min,indexmin;
		
	for(i=0; i<n; i++){
		printf("Enter Number [%d]:",i+1);    
		scanf("%d",&nam[i]);
	}
	max=nam[0];
	min=nam[0];
	indexmax=0;
	indexmin=0;
	for(i=0; i<n; i++){
		if (nam[i]>max){
		    max=nam[i];
		    indexmax=i;
		}
		if(nam[i]<min){
			min=nam[i];
			indexmin=i;
		}
	}
		printf("\n***********Maximun***********");
		printf("\nMaximun :%d",max);
		printf("\nPosition of Maximun is :%d",indexmax+1);
		printf("\n\n***********Minimun***********");
		printf("\nMinimun :%d",min);
		printf("\nPosition of Minimun is :%d",indexmin+1);
		return 0;
		}
