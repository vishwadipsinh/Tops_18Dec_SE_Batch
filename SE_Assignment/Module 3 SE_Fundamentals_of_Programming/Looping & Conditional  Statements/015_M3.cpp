/*
15.Calculate sum of 10 numbers using of while loop
*/

#include<stdio.h>
int main(){
	int a,i=1,n;
	while(i<=10){
		printf("\n Enter the number(%d) : ",i);
		scanf("%d",&n);		
		a=a+n;
		i++;
	}
	printf("\n sum of all 10 numbers is = %d",a);
}

