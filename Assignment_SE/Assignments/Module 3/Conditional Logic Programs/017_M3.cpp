/*
17.Write a C program to check whether a triangle can be formed with the given
values for the angles.
*/

/*
 let's say there is a,b,c angles 
a+b+c must be = 180 
if not then triangle can't form
*/

#include<stdio.h>
int main(){
	int a,b,c;
	
	printf("Enter value of first angle for triangle: ");
    scanf("%d",&a);
    
    printf("Enter value of second angle for triangle: ");
    scanf("%d",&b);
    
    printf("Enter value of third angle for triangle: ");
    scanf("%d",&c);
	
	
	if(a+b+c==180){
		printf("triagle can be formed");
	}else{
		printf("triangle can not be formed");
	}
}



