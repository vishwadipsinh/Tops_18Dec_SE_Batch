/*
11.WAP to accept 5 numbers from user and display in reverse order using for loop and array
*/

#include <stdio.h>

int main() {
    int a[5],i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number(%d) :",i+1);
        scanf("%d", &a[i]);
    }

    printf("Numbers in reverse order: ");
    for (i = 4; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}

