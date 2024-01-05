/*
16.Calculate the Sum of Natural Numbers Using the While Loop
*/

#include<stdio.h>
int main(){
	int i=1,a,n;
	printf("\n Enter any natural number : ");
	scanf("%d",&a);
	n=0;
	while(i<=a){
		n=n+i;
		i++;
	}
	if(n==0){
		printf("\n given number is not natural number");
	}else{
		printf("\n Sum of 1 to %d is %d",a,n);	
	}
	
	
}

