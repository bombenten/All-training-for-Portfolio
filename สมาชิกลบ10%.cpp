#include<stdio.h> 
int main() 
{ 
    char member[2]; 
	float price; 
	
    printf("Please input your price : "); 
    scanf("%f", &price); 
    printf("Are you my member? :");
    scanf("%c", &member[2]);
    
    if(member[2] = 'n')
        printf("Your price is %.2f bath. Thank you.",price);
    else
    {
        printf("Your discount is %.2f bath.", price*(10/100));
        printf("Your price is %.2f. Thank you.",price-price*(10/100));
    }
}
