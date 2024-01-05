/*(10)WAP to check whether a number is negative, positive or zero.
*/

#include <stdio.h>

int main(){
    int number;
	
	printf("  Enter the number : ");
	scanf("%d",&number);
	
	if(number>0){
	    
		printf("\n given number is Positive");
		
	}else if (number==0){
	    
		printf("\n given number is  Zero");
		
	}
	else if (number<0){
	    
		printf("\n given number is  Negative");
		
	}
	    
	}
