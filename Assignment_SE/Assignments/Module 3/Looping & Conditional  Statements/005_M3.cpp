/*
5. WAP to print factorial of given number
*/

#include<stdio.h>
int main(){
	int n,f,i=1;
	
	
	printf("\n Enter the number for finding a factorial : ");
	scanf("%d",&n);
	
	
		f=1;
		for(i=n;i>=1;i--){
			f=f*i;
		}
		printf("\n factorial of %d! = %d",n,f);
	
return 0;
}

