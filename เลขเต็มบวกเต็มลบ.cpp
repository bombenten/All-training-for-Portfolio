#include<stdio.h> 
int main() 
{ 
    int N; 
    scanf("%d", &N); 
    if(N < 0) 
        printf("Negative Number"); 
    else 
    	if(N==0)
        	printf("Zero Number"); 
        else
        	printf("Positive Number"); 
}
