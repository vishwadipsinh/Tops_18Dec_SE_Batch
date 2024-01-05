/*(6)Find the Character Is Vowel or Not
*/

#include <stdio.h>

int main(){
    char character;
	
	printf("  Enter the character : ");
	scanf("%c",&character);
	
	if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u'){
	    
		printf("\n It's a Vowel Character");
		
	}else{
	    
		printf("\n It's NOT a Vowel Character");
		
	}
	
	}
