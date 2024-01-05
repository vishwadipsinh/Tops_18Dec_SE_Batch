/*
(26) Convert temperature Fahrenheit to Celsius

*/

#include<stdio.h>

int main(){
	float f,c; // f=fahrenheit and c=celsius
	
	
	printf("\n Enter the fahrenheit Temperature : ");
	scanf("%f",&f);
	
	
	
	 c=((f-32)*5)/9; 
	 /* formula for fahrenheit Temperature to Celsius Temperature is (273°F - 32) × 5/9
	 */

 
		printf("\n Temperature in Celsius is %.2f",c);
	
	
}

	
	
	
	
