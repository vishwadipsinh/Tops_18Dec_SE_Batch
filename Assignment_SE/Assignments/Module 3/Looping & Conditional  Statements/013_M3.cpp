/*
13.calculate the Factorial of a Given Number using while loop
*/

#include<stdio.h>
int main(){
	int n,f=1,i=1;
	
	
	printf("\n Enter the number for finding a factorial : ");
	scanf("%d",&n);
	
	
		i=n;
		while(i>=1){
		    
		   
			f=f*i;
		
		    i--;
		}
		printf("\n factorial of given number %d! = %d",n,f);
	
return 0;

        }

