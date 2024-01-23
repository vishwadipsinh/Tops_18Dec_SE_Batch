/*
8. Write a program in C to count the total number of vowels or consonants in a string
*/

#include<stdio.h>
int main(){
	char s[100];
	int i,v=0,c=0;
	
	printf("\n Enter a string : ");
	gets(s);
	
	for(i=0;s[i]!='\0';i++){
		if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
			if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
				v++;
			}else{
				c++;
			}
		}
	}
	printf("\n Total Number of Vowels= %d",v);
	printf("\n Total Number of Consonants= %d",c);
}
