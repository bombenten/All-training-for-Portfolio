#include <stdio.h>
main(){
	int a,b,c,d;
	int ca,aa,ab,ac,ad;
	int re,pa;
	
	printf("Enter cash : ");
	scanf("%d",&ca);
	
	printf("value A : ");
	scanf("%d",&a);
	printf("Amount A : ");
	scanf("%d",&aa);
	
	printf("Value B : ");
	scanf("%d",&b);
	printf("Amount B : ");
	scanf("%d",&ab);
	
		printf("Value C : ");
	scanf("%d",&c);
	printf("Amount C : ");
	scanf("%d",&ac);

		printf("Value D : ");
	scanf("%d",&d);
	printf("Amount D : ");
	scanf("%d",&ad);

	
	printf("--------------------------------\n");
	pa = (aa*a)+(ab*b)+(ac*c)+(ad*d);
	printf("Pay : %d\n",pa);
	re = ca-((aa*a)+(ab*b)+(ac*c)+(ad*d));
	printf("Change : %d",re);


}
