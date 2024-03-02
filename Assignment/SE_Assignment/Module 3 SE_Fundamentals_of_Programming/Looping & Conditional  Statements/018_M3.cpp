/*
18.Write a C Program to Print the Multiplication Table of N
i. E.g. 5 * 1 = 5
ii. 5 * 2 = 10
1. .
2. .
iii. 5 * 10 = 50
*/

#include<stdio.h>
int main(){
	int a,b,i;
	
	printf("\n Enter the number for you want a table : ");
	scanf("%d",&a);
	
	for(i=1;i<=10;i++){
		b=a*i;
		printf("\n\t %d * %d = %d",a,i,b);
	}
}



