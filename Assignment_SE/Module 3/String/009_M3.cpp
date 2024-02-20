/*
9. Write a program in C to find the maximum number of characters in a string.
*/

#include<stdio.h>

int main(){
    int i,add=0,c=0;
	char s[50];
	
		
	printf("\n Enter string : ");
	gets(s);
	
	for(i=0;s[i]!='\0';i++){
		add++;
		if(s[i]==' ' || s[i]=='\n' || s[i]=='\t' ){
			if(add>c){
				c=add-1;
			}add=0;
		}else if(s[i+1]=='\0'){
			if(add>c){
				c=add;
			}
		}
	}
	printf("\n Max number of character in string is %d",c);	
}
