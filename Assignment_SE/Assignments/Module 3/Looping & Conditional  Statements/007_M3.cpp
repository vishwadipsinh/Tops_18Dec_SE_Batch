/*
7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse=82746
*/

#include<stdio.h>
int main(){
	int c,a,b,i;  
	
	printf("\n Enter number : ");
	scanf("%d",&c);
	b=0;
	for(i=c;i!=0;i=c){
		a=c%10;  		
		b=b*10+a;	
		c=c/10;			
	}
	printf("\n %d",b);
}



