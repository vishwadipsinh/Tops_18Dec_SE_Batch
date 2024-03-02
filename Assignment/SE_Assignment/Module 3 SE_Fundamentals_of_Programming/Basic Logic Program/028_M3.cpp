/*
(28)Convert years into days and months
*/


#include<stdio.h>
int main(){
	float Y,M,D;
	
	printf("\n Enter number of Years : ");
	scanf("%f",&Y);
	
	D= Y*365;		// to calculate days
	M= Y*12;		// to calculate months
	
	printf("\n %.2f Year is equals %.2f Months or %.2f Days",Y,M,D);
	

}
