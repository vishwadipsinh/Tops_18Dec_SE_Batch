/*
(20) Accept monthly salary from the user and deduct 10% insurance premium,
    10% loan installment find out of remaining salary
*/

#include<stdio.h>

int main(){
	int a,b; // b=Monthly Salary and a=Remaining Salary
	
	
	printf("\n Enter The Monthly Salary Amount: ");
	scanf("%d",&b);
	
	a=b-((b/10)+(b/10));  
	
	/*  Remaining Salary=Monthly Salary-((MS/10% Insurance Premium)+(MS/10% Loan Installment))      
	*/
 
		printf("\n Remaining Salary is %d",a);
	
	
}

	
	
	
	
