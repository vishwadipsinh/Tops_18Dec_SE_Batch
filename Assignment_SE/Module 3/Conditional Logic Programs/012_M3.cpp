/*
12.WAP to find maximum number among 3 numbers using ternary operator
*/
#include <stdio.h>

int main() {
    int a,b,c, max;

    
    printf("Enter first number: ");
    scanf("%d",&a);
    
    printf("Enter second number: ");
    scanf("%d",&b);
    
    printf("Enter third number: ");
    scanf("%d",&c);

    
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    
    printf("The maximum number is: %d\n", max);

    return 0;
}
