/*
(29) Convert minutes into seconds and hours
*/

#include<stdio.h>
int main(){
	int M,S,H,rm;
	
	printf("\n Enter Minutes :");
	scanf("%d",&M);
	
	S= M*60; 		// calculate seconds
	H= M/60;		// calculate hours
	rm=M%60;		// calculate remaining minuts
	
	printf("\n %d Minutes is equals %d Seconds or %d Hours and %d Minuts",M,S,H,rm);
		
}
