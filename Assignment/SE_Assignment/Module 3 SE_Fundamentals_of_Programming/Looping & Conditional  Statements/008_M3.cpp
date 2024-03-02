/*
8. Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
*/

#include<stdio.h>
int main(){
	int r,a,i,n;
	
	printf("\n Enter number : ");
	scanf("%d",&n);
	a=0;
	for(i=n;i!=0;i=n){
		r=n%10;
		if(r>a){
			a=r;
		}
		n=n/10;
	}
	printf("\n MAX Number is %d ",a);
	
	
}


