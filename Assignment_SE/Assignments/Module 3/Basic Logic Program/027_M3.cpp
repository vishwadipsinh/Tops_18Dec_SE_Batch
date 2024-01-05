/*
(27) Convert days into months
*/

#include<stdio.h>
int main(){
	int M,D,rd; //M=Month,D=Days,rd=remaining days

	printf("\n Enter Number of Days : ");
	scanf("%d",&D);
	
	M=D/30;		// calculate month
	rd=D%30;	// calculate ramaining days
	
	printf("\n %d Days is equals %d Months and %d Days",D,M,rd);
	

}
