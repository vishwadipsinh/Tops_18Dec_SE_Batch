/*
4. WAP to find factorial using recursion
*/

#include<stdio.h>
int factorial(int n);
int main(){
    int c;
    printf("Enter a Number :");
    scanf("%d",&c);
    printf("Factorial is :%d",factorial(c));
}
int factorial(int n){
    int a=n,c;
    if(n==1){
        return 1;
    }else{
        c=a*factorial(n-1);
        return c;
    }
}
