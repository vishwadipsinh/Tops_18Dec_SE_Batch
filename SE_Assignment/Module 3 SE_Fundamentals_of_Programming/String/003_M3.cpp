/*
3. Write a program in C to print individual characters of a string in reverse order
*/

#include<stdio.h>

int main() {
    char str[150];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (length=0;str[length]!='\0';length++);

    printf("\nIndividual characters of the string in reverse order are:\n");

    for (int i=length-1;i>=0;i--){
        printf("  %c  ", str[i]);
    }

    return 0;
}
