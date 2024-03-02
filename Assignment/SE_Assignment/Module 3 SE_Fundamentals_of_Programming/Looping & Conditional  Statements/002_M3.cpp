/*
2. WAP to accept 5 numbers from user and display all numbers
*/

#include<stdio.h>
int main(){
	int i,n;


	for(i=1;i<=5;i++){
		printf("\n\n Enter number  %d) : ",i);
		scanf("%d",&n);
		printf(" you given number is %d",n);
	}
	
    return 0;
    }
