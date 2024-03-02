/*
21).	Accept 2 numbers from user and swap 2 numbers with using 3rd variable
		and without using 3rd variable
*/

#include<stdio.h>
int main(){
	int a,b,c;		
	int x,y;		
	

	printf("\n Enter value of a : ");
	scanf("%d",&a);
	printf("\n Enter value of b : ");
	scanf("%d",&b);	

	printf("\nvalue of a and b before swaping is %d and %d",a,b);	
	
	c = a+b;	
	a = c-a;	
	b = c-b;	
	
	printf("\nvalue of a and b after swaping is %d and %d\n",a,b);	

	
	
	printf("\n Enter value of x : ");
	scanf("%d",&x);
	printf("\n Enter value of y : ");
	scanf("%d",&y);	
	
	printf("\nvalue of x and y before swaping is %d and %d",x,y);	

	x = x+y;		
	y = x-y;		
	x = x-y;		

	printf("\nvalue of x and y after swaping is %d and %d\n",x,y);	
	
	
}
