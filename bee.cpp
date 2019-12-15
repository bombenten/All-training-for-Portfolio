/* Program Activity By Thanatorn */
#include <stdio.h>
main(){
	
	int n,r,q,w,s,t;
	int i;
	
//	for(r=0;r<=0;r--){
//		if(n==-1){
//			break ;
//		}
		q = 1 ;
		w = 2 ;
		s = 1 ;
		t = q + w + s ;
			
		printf("Number = ");
		scanf("%d",&n);
//	}
		printf("   [Q W S ][T]\n");
		if(n==1){
			printf("<%d>[%d %d %d][%d]\n",i,q,w,s,t);
		}		
		else{
			for(i=0;i<n-1;i++){
//			printf("");

			s = w ;
			w = t ;
			t = q + w + s ;
			
			printf("<%d>[%d %d %d][%d]\n",i+2,q,w,s,t);
			
			}
			
		}
		
		
	
}
