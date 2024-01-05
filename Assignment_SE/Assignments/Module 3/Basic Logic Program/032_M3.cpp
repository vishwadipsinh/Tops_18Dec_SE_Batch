/*
32).	Accept 2 numbers and find out its sum check it size
*/

#include<stdio.h>
int main(){
	int a,b,sum;
	int s;  
	printf("\n Enter the number a : ");
	scanf("%d",&a);
	
	printf("\n Enter the number b : ");
	scanf("%d",&b);
	
	sum = a + b;
	s = sizeof(sum);  
	printf("\n sum of a and b is %d",sum);
	printf("\n size of sum is %d",s);  
	
	
}
