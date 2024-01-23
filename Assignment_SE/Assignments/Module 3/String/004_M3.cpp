/*
4. Write a program in C to count the total number of words in a string.
*/

#include <stdio.h>

int main() {
    char str[500];

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    int count=0;

    for (int i=0;str[i]!='\0';i++) {
        // we will not count space
        if (str[i]==' ' || str[i]=='\t' || str[i]=='\n') {
            count++;
        }
    }
    printf("Total number of words in the string is: %d\n",count);

    return 0;
}
