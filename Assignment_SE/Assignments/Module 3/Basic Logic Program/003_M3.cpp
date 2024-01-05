//(3)WAP TO find Area and Circumference of Circle
#include<stdio.h>

int main(){
    float Area,Radious,Pi,Circumference;
    
    //Area=pr²
    printf("enter the value of r:");
    scanf("%f",&Radious);
    
    Pi=3.14;
    Area=Pi*Radious*Radious;
    printf("Area of Circle is %f",Area);
    
    //Circumference=2pr
    Circumference=2*Pi*Radious;
    printf("\nCircumference of Circle is %f",Circumference);
    
    
}
