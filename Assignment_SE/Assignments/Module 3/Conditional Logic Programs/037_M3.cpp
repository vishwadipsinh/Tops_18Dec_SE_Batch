/*
37. WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case
*/
#include <stdio.h>

int main() {
    char c; //for 2nd. Question
    int d; //for 1st. Question
    
    //i. Monday to Sunday using switch case
    
    printf("Enter a number from 1 to 7  of the week: ");
    scanf("%d", &d);

    switch(d) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.");
    }
    
    
    
    
    //ii. Vowel or Consonant using switch case
    
    printf("\nEnter any Alphabet: ");
    scanf(" %c", &c); 

    switch(c) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a Vowel.", c);
            break;
        default:
            printf("%c is a Consonant.", c);
    }

    return 0;
}
