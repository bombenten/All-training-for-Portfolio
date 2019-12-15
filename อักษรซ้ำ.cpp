#include<stdio.h>
main(){
	
	int i,j,count,chk;
	char word[100],a[100],b[100];
	
	count = 0 ;
	
	printf("Enter your word : ");
	scanf("%s",word);
	
	for(i=0;word[i]!='\0';i++){
			b[i] = 0;
			chk = 0;
		for(j=0;j<=count;j++){	
			if(word[i]==a[j]){
				chk=1;	
				b[j]++;			
			}
//			printf("word[%d] = %c    a[%d] = %c ",i,word[i],j,a[j]);
//			printf("----%d\n",b[j]);		
		}
			
		if(chk==0){
			a[count] = word[i];
			b[count]++;
			count++;
		}
		
	}
	for(j=0;j<count;j++){
		printf(" %c",a[j]);
		printf(" = %d\n",b[j]);
	}
	
	printf("\n");
	
}
