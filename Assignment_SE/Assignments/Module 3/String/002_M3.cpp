/*
2. Write a program in C to separate individual characters from a string.
*/
#include<stdio.h>

int main() {
    char str[150];
    int i=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("\nIndividual characters from the string are:\n");

    for (i=0;str[i]!='\0';i++){
        printf("  %c  ", str[i]);
    }

    return 0;
}
