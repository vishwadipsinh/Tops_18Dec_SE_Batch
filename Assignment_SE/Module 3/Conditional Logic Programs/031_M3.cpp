/*
31. Write a program in C to read any Month Number in integer and display the
number of days for this month.
*/

#include <stdio.h>

int main(){
	
	int m;
	printf("\n Enter Month in number format(i.e 1 to 12) : ");
	scanf("%d",&m);
	
	switch(m){
		case 1 : printf("	31 days in January month");break;
		case 2 : printf("	28 or 29 days in Fabruary month");break;
		case 3 : printf("	31 days in March month");break;
		case 4 : printf("	30 days in April month");break;
		case 5 : printf("	31 days in May month");break;
		case 6 : printf("	30 days in June month");break;
		case 7 : printf("	31 days in July month");break;
		case 8 : printf("	31 days in August month");break;
		case 9 : printf("	30 days in September month");break;
		case 10 : printf("	31 days in October month");break;
		case 11 : printf("	30 days in November month");break;
		case 12 : printf("	31 days in December month");break;
		default : printf("	Enter valid month");break;
	}
	return 0;
}
