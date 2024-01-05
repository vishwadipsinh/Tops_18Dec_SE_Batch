/*
6. WAP to print Fibonacci series up to given numbers
*/

#include <stdio.h>

int main() {
    int a=0,b=1,c,d ;

    printf("Enter the limit number for Fibonacci series: ");
    scanf("%d", &c);

    printf("Fibonacci Series up to %d numbers=", c);

    for (int i = 1; i <= c; ++i) {
        printf("%d \t",a);
        d = a + b;
        a = b;
        b = d;
    }

    return 0;
}
