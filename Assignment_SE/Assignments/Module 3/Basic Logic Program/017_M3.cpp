/*
(17) calculate person’s insurance premium based on salary
*/

#include<stdio.h>

int main(){
	int a; // a =Annual salary
	float b; // b = premium
	
	printf("\n Enter The Annual Salary Amount: ");
	scanf("%d",&a);
	
	b=a/8;        
	
	/*  Let's say premium is 8% of the Salary so premium=salary/premium %
	*/ 
	
	printf("\n Insurance Premium is %.2f",b);
	
return() 0;	
}

	
	
	
	
