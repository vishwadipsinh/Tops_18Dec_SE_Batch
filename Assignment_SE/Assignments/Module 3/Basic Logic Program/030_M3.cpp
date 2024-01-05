/*
(30) WAP to convert years into days and days into years
*/

#include<stdio.h>
int main(){
	float d,y;
	printf("\n Enter Years : ");
	scanf("%f",&y);
	
	d = y * 365;
	printf("\n %.2f years = %.0f days",y,d);
	
	int D,Y,mod;
	
	printf("\n\n\n\n Enter days : ");
	scanf("%d",&D);
	Y = D/365;
	mod = D%365;
	
	printf("\n %d days is = %d years and %d days",D,Y,mod);
	
	
}
