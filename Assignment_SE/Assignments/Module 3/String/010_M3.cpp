/*
10.Write a program in C to extract a substring from a given string
*/

#include<stdio.h>
#include<string.h>
int main(){
    int point,length;
	char c1[100],c2[100];
	
	
	printf("\n Enter string : ");
	gets(c1);
	
	printf("\n Enter from which point you want a substring : ");
	scanf("%d",&point);
	printf("\n Enter length of substring : ");
	scanf("%d",&length);

	int i,j=0;
	for(i=point-1;i<=(point+length-1);i++){
		c2[j]=c1[i];
		j++;
	}
	printf(c2);
}
