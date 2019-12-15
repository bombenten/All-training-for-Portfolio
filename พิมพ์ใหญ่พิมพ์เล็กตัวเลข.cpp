#include<stdio.h> 
int main(){
	
	char sc;
	int i;
	
	printf("Input Char : ");
	scanf("%c",&sc);
	
	if((sc>='A')&&(sc<='Z')){
		printf("Upper case Letter.\n");
	}else if((sc>='a')&&(sc<='z')){
		printf("Lower case Letter.\n");
	
	}else if((sc>='1')&&(sc<='9')){
		printf("Digit.\n");
	
	}else{
		printf("Other.\n");
	}
	
	
	

	
	
}

