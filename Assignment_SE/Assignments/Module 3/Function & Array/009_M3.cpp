/*
(9) Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address andage
*/

#include <stdio.h>
struct employee{
    int employeeno,age;
    char employeename[20],address[100];
}s[5];

int main() {
    int i;
    
   for(i=1;i<=5;i++){
       
   printf("\n enter Employee Number :");
   scanf("%d",&s[i].employeeno);
   
   printf("\n enter Employee Name :");
   scanf("%s",&s[i].employeename);
   
   printf("\n enter Age :");
   scanf("%d",&s[i].age);
   
   printf("\n enter Address :");
   scanf("%s",&s[i].address);
   }
   
   printf("\n");
   
   
   for(i=1;i<=5;i++){
       
       printf("\n Employee Number : %d",s[i].employeeno);
       printf("\n Employee Name : %s",s[i].employeename);
       printf("\n Age : %d",s[i].age);
       printf("\n Address : %s",s[i].address);
       printf("\n");
   }
   
   
   
   return 0;
}
