/*
9. Write a program make a summation of given number (E.g., 1523 Ans: -11)
*/

#include<stdio.h>
int main(){
	int r,i,n,a,d;
	
	printf("\n Enter a Number : ");
	scanf("%d",&n);
	
	d=n; 		 
	a=0;
	for(i=n;i!=0;i=n){
		r=n%10;
		a=a+r;
		n=n/10;
	}
	printf("\n summation of given number %d is= %d",d,a);
}


