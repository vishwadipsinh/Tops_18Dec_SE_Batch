/*
12.WAP to accept 5 students name and store it in array
*/

#include<stdio.h>
int main(){
	int i;
	char a[5][20];
	
	for(i=1;i<=5;i++){
		printf("\n Enter Name (%d): ",i);
		gets(a[i]);
	}
	
	for(i=1;i<=5;i++){
		printf("\n Name (%d): %s",i,a[i]);
	}
}
