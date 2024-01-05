/*
22).	Calculate compound interest (Compound Interest formula:
	a. Formula to calculate compound interest annually is given by:
	Amount= P(1 + R/100)t
	b. Compound Interest = Amount – P
*/

/*
A = Amount
p = principle value 
R = rate of interest
t = time 
*/

#include<stdio.h>
#include<math.h>
int main(){
    float A,R,t,p;  
    
    printf("Enter the initial principal Amount : ");
    scanf("%f",&p);

    printf("Enter interest rate : ");
    scanf("%f",&R);

    printf("Enter number of year : ");
    scanf("%f",&t);

	
	
	A = p*(pow(1+R/100,t));   // formula for compound interest 

	printf("\nfinal amount is %f",A);
	printf("\ninterest for %f year is %f",t,A-p);

}
