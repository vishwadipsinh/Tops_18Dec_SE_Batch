/*
13.WAP to accept 5 numbers from user and check entered number is even or odd using of array
*/

#include<stdio.h>
int main(){
	int n[5],i;
	for(i=1;i<=5;i++){
		printf("\nEnter the Number n[%d]: ",i);
		scanf("%d",&n[i]);

	
		if(n[i]%2==0){
		    printf("Given Number is EVEN");
		    }else{
		    printf("Given Number is ODD");
	}
}
}
