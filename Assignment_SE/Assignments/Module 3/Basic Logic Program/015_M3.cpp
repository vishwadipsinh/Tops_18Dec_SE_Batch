/*
15).	Convert school’s name in abbreviated form
*/


#include<stdio.h>
int main(){
	char fname[20],sname[20],tname[20];
	
	printf("\n Enter full name : ");
	
	scanf("%s %s %s",&fname,&sname,&tname);
	
	printf("%c%c %s",fname[0],sname[0],tname);
	

}
