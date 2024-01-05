/*(9)C Program to Check Uppercase or Lowercase or Digit or Special
Character
*/

#include <stdio.h>

int main(){
     char character;

    
    printf("Enter a character: ");
    scanf("%c",&character);

    //for UPPERCASE Letter
    if (character >= 'A' && character <= 'Z') {
        printf("%c character is uppercase letter.", character);
    }
    //for lowercase Letter
    else if (character >= 'a' && character <= 'z') {
        printf("%c character is lowercase letter.", character);
    }
    //for Digital Character
    else if (character >= '0' && character <= '9') {
        printf("%c is a digit.", character);
    }
    // for Special Character
    else {
        printf("%c is special character.", character);
    }
}
