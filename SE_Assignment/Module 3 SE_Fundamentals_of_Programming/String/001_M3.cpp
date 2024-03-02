/*
1. Write a program in C to find the length of a string without using library functions.
*/

#include<stdio.h>

int main() {
    char str[150];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i=0;str[i]!='\0';i++) {
        // Check if the current character is not a space
        if (str[i] != ' ') {
            length++;
        }
    }

    printf("Length of the string is: %d\n", length);

    return 0;
}
