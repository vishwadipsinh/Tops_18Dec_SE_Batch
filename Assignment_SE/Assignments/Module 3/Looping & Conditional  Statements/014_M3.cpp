/*
14.Accept 5 numbers from user and find those numbers factorials
*/

#include<stdio.h>
int main(){
	int a,i=1,n,b;

		for(i=1;i<=5;i++){
			printf("\n\n Enter a number %d : ",i);
			scanf("%d",&n);
			b=1;
			for(a=n;a>=1;a--){
				b=b*a;
			}
			printf(" factorial is %d",b);
		}
	}
	
		
	
	
	
	





