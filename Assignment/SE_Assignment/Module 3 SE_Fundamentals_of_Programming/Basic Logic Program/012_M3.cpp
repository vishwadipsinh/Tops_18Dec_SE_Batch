/* (12)Accept number of students from user. I need to give 5 apples to each student. How many apples are required?
*/

#include <stdio.h>

int main() {
    int Requirement,student; 
    
    printf("enter the Number of students:");
    scanf("%d",&student);
    
    
    //Requirement of Apple is, Requirement=5*student
    Requirement=5*student;
    printf("\n The Total Requirement of Apple is %d",Requirement);
    
    

    return 0;
}






