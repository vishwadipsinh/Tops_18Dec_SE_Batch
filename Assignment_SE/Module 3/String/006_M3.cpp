/*
6. Write a program in C to count the total number of alphabets, digits and special characters in a string.
*/
#include <stdio.h>

void countCharacters(char str[]) {
    int alphabets = 0, digits = 0, specials = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        // Check for alphabet
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        }
        // Check for digit
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        // check for digit
        else if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            specials++;
        }
    }

    printf("Total alphabets: %d\n", alphabets);
    printf("Total digits: %d\n", digits);
    printf("Total characters: %d\n", specials);
}

int main() {
    char str[500];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countCharacters(str);

    return 0;
}

