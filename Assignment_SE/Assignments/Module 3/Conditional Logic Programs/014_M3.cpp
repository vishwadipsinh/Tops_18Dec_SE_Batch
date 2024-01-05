/*
14.WAP to find the largest of three numbers.
*/

#include <stdio.h>

int main() {
    int a,b,c, largest;

    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("Enter third numbers: ");
    scanf("%d", &c);

    
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    
    printf("The largest number is: %d\n", largest);

    return 0;
}
