/*16.Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
*/

#include<stdio.h>
int main(){
	int a;
	printf("\n Enter temperature value : ");
	scanf("%d",&a);
	
	if(a<0){
		printf("Freezing weather");
	}else if(a>=0 && a<10){
		printf("Very Cold weather");
	}else if(a>=10 && a<20){
		printf("Cold weather");	
	}else if(a>=20 && a<30){
		printf("Normal Temperature");
	}else if(a>=30 && a<40){
		printf("Its Hot");
	}else{
		printf("Its Very Hot");
	}
	
	
}


