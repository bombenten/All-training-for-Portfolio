#include <stdio.h>
main(){
	int g;
	while(1){
		printf("\n------------------------------");
	printf("\nEnter Your Score : ");
	scanf("%d",&g);

	
	if(g>=80){
		printf("Grade = 4.0");
	}
	else{
		if(g>=75){
			printf("Grade = 3.5");
		}
		else{
			if(g>=70){
				printf("Grade = 3.0");
			}
			else{
				if(g>=65){
					printf("Grade = 2.5");
				}
				else{
					if(g>=60){
						printf("Grade = 2.0");
					}
					else{
						if(g>=55){
							printf("Grade = 1.5");
						}
						else{
							if(g>=50){
								printf("Grade = 1.0");
							}
							else{
								if(g>=0){
									printf("Grade = 0");
								}
							}
						}
					}
				}
			}
		}
	}
}
}
