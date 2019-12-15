#include <stdio.h>
main(){
	
	int i,j,p,t;
	int k,u,a,r;
	
	while(1){
	
	printf("\nEnter your number :");
	scanf("%d",&p);
	printf("= ");
	
	
	a = p/1000;
	
	if(p>=1000){
		    
			k = (a/100)*100;
	if(p>=0){
	if(k>=100){
		if(k==100){
			printf("One hundred ");
		}
		if(k==200){
			printf("Two hundred ");
		}
		if(k==300){
			printf("Three hundred ");
		}
		if(k==400){
			printf("Four hundred ");
		}
		if(k==500){
			printf("Five hundred ");
		}
		if(k==600){
			printf("Six hundred ");
		}	
		if(k==700){
			printf("Seven hundred ");
		}
		if(k==800){
			printf("Eight hundred ");
		}
		if(k==900){
			printf("Nine hundred ");
		}
	}
		u = a - k;
		
		if(u==11){
			printf("eleven ");
		}
		else{
			if(u==12){
				printf("twelve ");
			}
			else{
				if(u==13){
					printf("thirteen ");
				}
				else{
					if(u==14){
						printf("fourteen ");
					}
					else{
						if(u==15){
							printf("fifteen ");
						}
						else{
							if(u==16){
								printf("sixteen ");
							}
							else{
								if(u==17){
									printf("seventeen ");
								}
								else{
									if(u==18){
										printf("eighteen ");
									}
									else{
										if(u==19){
											printf("nineteen");
										}
										else{
											u = ((a - k)/10)*10 ;
			
											if(u==10){
												printf("ten ");
											}
											if(u==20){
												printf("twenty ");
											}
											if(u==30){
												printf("thirty ");
											} 
											if(u==40){
												printf("Fourty ");
											}
											if(u==50){
												printf("fifty ");
											}
											if(u==60){
												printf("Sixty ");
											}	
											if(u==70){
												printf("seventy ");
											}
											if(u==80){
												printf("eighty ");
											}
											if(u==90){
												printf("ninety ");
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
			t = (a - (k + u));
	
	if(t>=0){
		if(t==1){
			printf("one ");
		}
		if(t==2){
			printf("two ");
		}
		if(t==3){
			printf("three ");
		}
		if(t==4){
			printf("four ");
		}
		if(t==5){
			printf("five ");
		}
		if(t==6){
			printf("six ");
		}	
		if(t==7){
			printf("seven ");
		}
		if(t==8){
			printf("eight ");
		}
		if(t==9){
			printf("nine ");
		}
	}	
}
	printf("thousand ");

	}
	
	
	
	if(1){
		
	i = ((p/100)*100)-(a*1000);
	if(p>0){
	if(i>=100){
		if(i==100){
			printf("one hundred ");
		}
		if(i==200){
			printf("two hundred ");
		}
		if(i==300){
			printf("three hundred ");
		}
		if(i==400){
			printf("four hundred ");
		}
		if(i==500){
			printf("five hundred ");
		}
		if(i==600){
			printf("six hundred ");
		}	
		if(i==700){
			printf("seven hundred ");
		}
		if(i==800){
			printf("eight hundred ");
		}
		if(i==900){
			printf("nine hundred ");
		}
	}
		j = (p - i)-(a*1000);
		
		if(j==11){
			printf("eleven ");
		}
		else{
			if(j==12){
				printf("twelve ");
			}
			else{
				if(j==13){
					printf("thirteen ");
				}
				else{
					if(j==14){
						printf("fourteen ");
					}
					else{
						if(j==15){
							printf("fifteen ");
						}
						else{
							if(j==16){
								printf("sixteen ");
							}
							else{
								if(j==17){
									printf("seventeen ");
								}
								else{
									if(j==18){
										printf("eighteen ");
									}
									else{
										if(j==19){
											printf("nineteen");
										}
										else{
											j = (((p - i)/10)*10)-(a*1000);
			
											if(j==10){
												printf("ten ");
											}
											if(j==20){
												printf("twenty ");
											}
											if(j==30){
												printf("thirty ");
											} 
											if(j==40){
												printf("Fourty ");
											}
											if(j==50){
												printf("fifty ");
											}
											if(j==60){
												printf("Sixty ");
											}	
											if(j==70){
												printf("seventy ");
											}
											if(j==80){
												printf("eighty ");
											}
											if(j==90){
												printf("ninety ");
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

	i = (p - (i + j))-(a*1000);
	
	if(i>=0){
		if(i==1){
			printf("one");
		}
		if(i==2){
			printf("two");
		}
		if(i==3){
			printf("three");
		}
		if(i==4){
			printf("four");
		}
		if(i==5){
			printf("five");
		}
		if(i==6){
			printf("six");
		}	
		if(i==7){
			printf("seven");
		}
		if(i==8){
			printf("eight");
		}
		if(i==9){
			printf("nine");
		}
	}	
}		

else{
	printf("zero");
}
	}
	

}
}
