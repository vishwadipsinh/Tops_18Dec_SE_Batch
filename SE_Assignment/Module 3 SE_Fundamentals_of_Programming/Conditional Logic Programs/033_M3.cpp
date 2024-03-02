/*
33. WAP to input the week number and print week day
*/

#include<stdio.h>
int main(){
	int a; 		//a=Week number
	printf("\n Enter the week number (1 to 7) : ");
	scanf("%d",&a);
	
	switch(a){
		case 1: printf("Monday"); break;
		case 2: printf("Tuesday"); break;
		case 3: printf("Wednesday"); break;
		case 4: printf("Thursday"); break;
		case 5: printf("Friday"); break;
		case 6: printf("Saturday"); break;
		case 7: printf("Sunday"); break;
		default : printf("Enter a valid  number"); break;
	}
	
}

