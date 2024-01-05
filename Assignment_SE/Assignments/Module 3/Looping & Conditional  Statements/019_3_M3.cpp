/*
19. Patterns: 3
*/

#include<stdio.h>
int main(){
	int i,j,k,a;
	a=1;
	for(i=1;i<=5;i++){
		for(j=5;j>=i;j--){
			printf("   ");
		}
		
		for(k=1;k<=a;k++){
			printf(" * ");	
		}
		
		a=a+2;
		printf("\n");
	}
}
