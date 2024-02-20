/*
7. WAP Find out length of string without using inbuilt function
*/

#include<stdio.h>
int main(){
	char c[50];
	int i,add=0;
	
	printf("\n Enter String :");
	gets(c);
	
	for(i=0;c[i]!='\0';i++){
		add++;
	}
	printf("\n Length of Given String is %d",add);
}
