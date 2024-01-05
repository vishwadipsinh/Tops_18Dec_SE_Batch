/*
4. WAP to print table up to given numbers
*/

#include <stdio.h>

int main() {
   
    int i,a,b;
    
    //a=user input,which table he want.
    printf("enter number for table creation :");
    scanf("%d",&a);
    
    for(i=1;i<=10;i++){
    b=a*i;
    printf("\n %d * %d= %d \n",a,i,b);
    }
    
    
    return 0;
}
