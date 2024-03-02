/*
5. Write a program in C to compare two strings without using string library functions.
*/

#include <stdio.h>

int compare(char a[],char b[]) {
    int i=0;

    while (a[i]!='\0' && b[i]!='\0') {
        if (a[i]!=b[i]) {
            return a[i]-b[i];
        }
        i++;
    }
    return 0;
}

int main() {
    char a[150],b[150];

    printf("Enter the first string: ");
    fgets(a, sizeof(a), stdin);

    printf("Enter the second string: ");
    fgets(b, sizeof(b), stdin);

    int result = compare(a, b);

    if (result == 0) {
        printf("Both strings are equal.\n");
    } else {
        printf("Both strings are NOT equal.\n");
    }

    return 0;
}
