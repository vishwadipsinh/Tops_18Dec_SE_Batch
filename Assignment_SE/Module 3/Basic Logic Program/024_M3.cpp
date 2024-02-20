/*
24.		Accept 5 employees name and salary and count average and total salary
*/

#include<stdio.h>
#include<string.h>
int main(){
	char e1[20],e2[20],e3[20],e4[20],e5[20];  
	int s1,s2,s3,s4,s5,total;					
	float avg;
	
	printf("\n Enter name of fisrt employee : ");
	scanf("%s",&e1);
	printf("\n Enter salary of first employee : ");
	scanf("%d",&s1);

	printf("\n Enter name of second employee : ");
	scanf("%s",&e2);
	printf("\n Enter salary of second employee : ");
	scanf("%d",&s2);

	printf("\n Enter name of third employee : ");
	scanf("%s",&e3);
	printf("\n Enter salary of third employee : ");
	scanf("%d",&s3);

	printf("\n Enter name of forth employee : ");
	scanf("%s",&e4);
	printf("\n Enter salary of forth employee : ");
	scanf("%d",&s4);

	printf("\n Enter name of fifth employee : ");
	scanf("%s",&e5);
	printf("\n Enter salary of fifth employee : ");
	scanf("%d",&s5);

	total = s1+s2+s3+s4+s5;		
	avg = total/5;			

    printf("\n total salary of All employees is %d",total);
	printf("\n Average salary of total employees is %f",avg);
	
	

	
}
