#include <stdio.h>
main(){
	
	int menu,pay,change,coin;
	
	printf("1 - Cola (13THB)\n");
	printf("2 - Green (20THB)\n");
	printf("3 - Coffee (35THB)\n");
	printf("4 - Lemonnade (30THB)\n");
	printf("5 - Fresh Water (7THB)\n");
	
	printf("Choose : ");
	scanf("%d",&menu);
	
	printf("How much do you pay? ");
	scanf("%d",&pay);
	printf("--------------------------------");
	
	if(menu==1){
		change = pay - 13;
	}
	if(menu==2){
		change = pay - 20;
	}
	if(menu==3){
		change = pay - 35;
	}
	if(menu==4){
		change = pay - 30;
	}
	if(menu==5){
		change = pay - 7;
	}
	
//	if(change >= 10){
        printf("\n10 Baht = %d ", change/10);
        change = change % 10;
//  }
//    if(change >= 5){
        printf("\n5 Baht = %d ", change/5);
        change = change % 5;
//    }
//    if(change >= 2){
        printf("\n2 Baht = %d ", change/2);
        change = change % 2;
//    }
//   if(change >= 1){
        printf("\n1 Baht = %d ", change/1);
        change = change % 1;
//    }
   
	
	
}
