/* (2)Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)
*/
#include<stdio.h>

int main(){
    int a,b,c,d;
    
    //ADDITION
    printf("\n enter value of a:");
    scanf("%d",&a);
    
    printf("\n enter value of b:");
    scanf("%d",&b);
    
    c= a + b;
    
    printf("\n The SUM of %d and %d is %d",a,b,c); 
    
    
    //MULTIPLICATION
    printf("\n enter value of a:");
    scanf("%d",&a);
    
    printf("\n enter value of b:");
    scanf("%d",&b);
    
    c= a * b;
    
    printf("\n The Multiplication of %d and %d is %d",a,b,c); 
    
    
    //DIVISION
    printf("\n enter value of a:");
    scanf("%d",&a);
    
    printf("\n enter value of b:");
    scanf("%d",&b);
    
    c= a / b;
    
    printf("\n The Division of %d and %d is %d",a,b,c); 
    
    
    //MODULO
    printf("\n enter value of a:");
    scanf("%d",&a);
    
    printf("\n enter value of b:");
    scanf("%d",&b);
    
    c= a % b;
    
    printf("\n The Modulo of %d and %d is %d",a,b,c); 
    
    
}
    
