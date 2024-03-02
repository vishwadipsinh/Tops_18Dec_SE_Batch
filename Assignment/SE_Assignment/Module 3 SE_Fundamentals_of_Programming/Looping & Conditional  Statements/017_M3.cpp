/*
17.Calculate 5 numbers from user and calculate number of even and odd using
of while loop
*/

#include<stdio.h>
int main(){
	int i=1,e,o,n;
	e=0;o=0;
	while(i<=5){
		printf("\n Enter any number(%d) : ",i);
		scanf("%d",&n);
		if(n%2==0){
			e++;
		}else{
			o++;
		}
		i++;
	}
	printf("\n We have %d even number and %d odd numbers",e,o);
}


