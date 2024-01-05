/*
11.Accept 5 names from user at run time.
*/

#include<stdio.h>
int  main(){
	int i;
	char name[10];
	
	for(i=1;i<=5;i++){
		printf("\n\n Enter name(%d) : ",i);
		scanf(" %s",&name);
		printf(" %s",name);
	}
}

