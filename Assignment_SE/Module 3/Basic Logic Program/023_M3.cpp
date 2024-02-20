/*
23).	WAP to calculate swap 2 numbers with using of multiplication and division.
*/

#include<stdio.h>
int main(){
	int a,b;
	
	printf("\n Enter value of a : ");
	scanf("%d",&a);
	
	printf("\n Enter value of b : ");
	scanf("%d",&b);

	printf("\n Value of a and b before swaping is %d and %d",a,b);
	
	a = a*b;		
	b = a/b;	
	a = a/b;		
	
	printf("\n Value of a and b after swaping is %d and %d",a,b);
	
	
}
