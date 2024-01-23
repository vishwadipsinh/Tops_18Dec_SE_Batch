/*
16.Accept 5 numbers from user and perform sum of array
*/

#include<stdio.h>
int main(){
	int n[5],i,a=0;
	
	for(i=1;i<=5;i++){
	printf("Enter Value (%d): ",i);
	scanf("%d",&n[i]);
		a=a+n[i];
	}
	printf("\n Sum of All Value is %d",a);
}
