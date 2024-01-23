/*
1. Write a program to find out the max number from given array using function
*/

#include<stdio.h>
//Function Declaration:with return type,without argument
int max_number();
int main(){
    int c;
    //Function Calling
    c=max_number();
    printf("\n MAX Number is :%d",c);
    
}
//Function Definition
int max_number(){
    int i,j,a[10],b=0;
    
    for(i=1;i<=10;i++){
        printf("\n Enter (%d)Number :",i);
        scanf("%d",&a[i]);
    }
    for(j=1;j<=10;j++){
        if(b<a[j]){
            b=a[j];
        }
    }
    return b;
}
