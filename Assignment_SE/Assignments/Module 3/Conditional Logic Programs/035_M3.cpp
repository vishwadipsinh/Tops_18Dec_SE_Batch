/*
35.Accept the input month number and print number of days in that
month.
*/

#include<stdio.h>
int main(){
	
	int m;
	printf("\n Enter Month number(1 to 12) : ");
	scanf("%d",&m);
	
	switch(m){
		case 1 : printf("	31 days in January Month");break;
		case 2 : printf("	28 or 29 days in Fabruary Month");break;
		case 3 : printf("	31 days in March Month");break;
		case 4 : printf("	30 days in April Month");break;
		case 5 : printf("	31 days in May Month");break;
		case 6 : printf("	30 days in June Month");break;
		case 7 : printf("	31 days in July Month");break;
		case 8 : printf("	31 days in August Month");break;
		case 9 : printf("	30 days in September Month");break;
		case 10 : printf("	31 days in October Month");break;
		case 11 : printf("	30 days in November Month");break;
		case 12 : printf("	31 days in December Month");break;
		default : printf("	Enter valid month");break;
	}
	return 0;
}

