/*
11.Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa
*/

#include<stdio.h>
int main(){
	char s[100];
	int i;
	
	printf("\n Enter the string : ");
	gets(s);
	
	for(i=0;s[i]!='\0';i++){
		if((s[i]>='a') && (s[i]<='z')){
			s[i]='A'+s[i]-'a';
		}else if((s[i]>='A') && (s[i]<='Z')){
			s[i]='a'+s[i]-'A';
		}
	}
	printf("\n");
	puts(s);
}
