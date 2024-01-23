/*
12.Write a program in C to find the number of times a given word 'is' appears in the given string
*/

#include<stdio.h>
int main(){
	char c1[100],c2[10];
	int i,j,k,c=0,count=0,n=0;
	
	printf("\n Enter string : ");
	gets(c1);
	
	printf("\n Enter word : ");
	gets(c2);
	
	for(i=0;c2[i]!='\0';i++){
		count++;
	}
	
	for(i=0;c1[i]!='\0';i++){
		if(c1[i]==c2[0]){k=0;
			for(j=i;j<=i+count;j++){
				if(c1[j]!=c2[k]  || c1[j]=='\0'){
					if(c2[k]!='\0'){
						break;
					}else{
						c=1;
					}
				}k++;
			}
			if(c==1){
				n=n+1;
				c=0;
			}	
		}
	}
	
	printf(" \n WORD you enter is used for %d Times",n);
	
}
