/*
2. WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
*/

#include<stdio.h>
int main(){
	
	int d;
	float a,b,c;
	
	
	printf("\n Enter First Value: ");
	scanf("%f",&a);
	
	printf("\n Enter Second Value: ");
	scanf("%f",&b);
	
printf("\nPlease Enter 1 for Addition \nPlease Enter 2 for Subtraction \nPlease Enter 3 for Multiplication \nPlease Enter 4 for Division\n");
	scanf("%d",&d);
	
	switch(d){
		case 1:{c=a+b;
			break;
		}
		case 2:{c=a-b;
			break;
		}
		case 3:{c=a*b;
			break;
		}
		case 4:{c=a/b;
			break;
		}
		default:{
			printf("\nEnter Valid Input");
			break;
		}
	}
		printf("\nAnswer for your Calculation is %.2f",c);
	
	    return 0;
}
