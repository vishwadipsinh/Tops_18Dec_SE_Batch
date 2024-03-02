/*(1) Write a C program to accept two integers and check whether they are equal or not
*/

#include <stdio.h>

int main(){
    int a,b;
    
    printf("\n enter any numeric value for a:");
    scanf("%d",&a);
    
    printf("\n enter any numeric value for b:");
    scanf("%d",&b);
    
     if(a==b){
        printf("\n a and b Both are Eual");
        
    }
    else{
        printf("\n a and b Both are NOT Eual");
    }
    
}
