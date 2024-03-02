/*
7. Write a program in C to copy one string to another string.
*/

#include<stdio.h>
int main(){
	char s1[500],s2[500];
	int i;
	
	printf("\n Enter String : ");
	gets(s1);
	
	
	for(i=0;s1[i]!='\0';i++){
		s2[i]=s1[i];
	}
	printf("\n %s",s2);
	printf("\n string s1 copied to string s2");
}
