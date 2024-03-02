
/*11.WAP to find number is even or odd using ternary operator
*/
#include <stdio.h>

int main() {
	int n;
	
	printf("\n Enter any Number : ");
	scanf("%d",&n);
	
	(n%2==0)? printf("\n  %d is even number",n): printf("\n  %d is odd number",n);
	
	
}
