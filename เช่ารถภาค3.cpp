#include <stdio.h>
main(){
	
	int pp,day,n,dl;
	int a,b,c,d,av,bv,cv,dv,max;
	int ra,rb,rc,rd;
	
	ra=1;	rb=1;	rc=1;	rd=1;
	av=10;	bv=20;	cv=20;	dv=30;
	a=1;	b=1;	c=1;	d=1;
	
	for(day=1;day<8;day++){
		
		printf("\n\tDay [%d]\n",day);	
		max=av*a+bv*b+cv*c+dv*d;
		printf("There are %d seats.\n",max);
		printf("Enter people for lent : ");
		scanf("%d",&pp);
		printf("Enter day for lent : ");
		scanf("%d",&dl);
		printf("Date of return : %d\n",dl+day);
		printf("Car : ");
		
		if(pp>max||pp<=0){
			printf("0");
		}
		else{
			if(rd<=day && pp>20 && pp!=20&&dl>0){
				d=d-1;
				rd = day + dl;
				printf("4 ");
				pp = pp - 30 ;
			}
			if(b==1&&pp>10&&dl>0){
				b=b-1;
				rb = day + dl;
				printf("2 ");
				pp = pp - 20 ;	
			}
			if(c==1&&pp>10&&dl>0){
				c=c-1;
				rc = day + dl;	
				printf("3 ");
				pp = pp - 20 ;		
			}
			if(d==1&&pp==20&&dl>0){
				d=d-1;
				rd = day + dl;
				printf("4 ");
				pp = pp - 30 ;
			}
			if(a==1&&pp<=10&&pp!=0&&dl>0){
				a=a-1;
				ra = day + dl;
				printf("1 ");	
			}
			
		}
		if(rd<=day+1&&d==0){
			d++;
		}
		if(rb<=day+1&&b==0){
			b++;
		}
		if(rc<=day+1&&c==0){
			c++;	
		}
		if(ra<=day+1&&a==0){
			a++;
		}
		printf("\n");	
	}
}
