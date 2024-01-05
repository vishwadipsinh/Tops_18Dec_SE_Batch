/*
(25) Accept 5 expense from user and find average of expense

*/

#include<stdio.h>

int main(){
	int a,b,c,d,e,Average; // a to e is Expenses
	
	
	printf("\n Enter 1st. Expense : ");
	scanf("%d",&a);
	
	printf("\n Enter 2nd. Expense : ");
	scanf("%d",&b);
	
    printf("\n Enter 3rd. Expense : ");
	scanf("%d",&c);
	
	printf("\n Enter 4th. Expense : ");
	scanf("%d",&d);
	
	printf("\n Enter 5th. Expense : ");
	scanf("%d",&e);
	
	Average=(a+b+c+d+e)/5; //  Average=Expenses/5

 
		printf("\n Total Expense Average is %d",Average);
	
	
}

	
	
	
	
