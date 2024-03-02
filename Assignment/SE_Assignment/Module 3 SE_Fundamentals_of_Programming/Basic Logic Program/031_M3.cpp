/*
(31) Convert kilometers into meters
*/

#include<stdio.h>

int main(){
	float km,m;
	
	printf("\n Enter kilometers : ");
	scanf("%f",&km);
	
	m = km*1000;
	
	printf("\n %.2fkm = %.0f meter",km,m);

}
