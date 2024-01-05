/*(8)WAP to accept the height of a person in centimeters and categorize the
person according to their height.
*/

#include <stdio.h>

int main(){
    int Height;
	
	printf("  Enter the Height in centimeters : ");
	scanf("%d",&Height);
	
	if(Height<=91.44){
	    
		printf("\n Person's Height is Short");
		
	}else if(Height>=91.44&&Height<=152.4){
	    
		printf("\n Person's Height is Medium");
		
	}else{
	    
		printf("\n Person's Height is Long");
	
	}
}
