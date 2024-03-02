/*
15).  Write a C program to determine eligibility for admission to a professional
	course based on the following criteria
	Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
	in Chem>=50 and Total in all three subject >=190 or Total in Maths and
	Physics >=140 --------------------------------------Input the marks obtained in
	Physics :65 Input the marks obtained in Chemistry :51 Input the marks
	obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
	188 Total marks of Maths and Physics : 137 The candidate is not eligible.
*/



/*Condition:
maths should be >=65,physics should be >=55,chemistry should be>=50 
Total should be >=190 or maths+physics marks should be >=140
*/
	
	
#include<stdio.h>
int main(){
	int m,p,c,Total;
	
	printf("\n Enter marks obtained in maths : ");
	scanf("%d",&m);
	
	printf("\n Enter marks obtained in physics : ");
	scanf("%d",&p);
	
	printf("\n Enter marks obtained in chemistry : ");
	scanf("%d",&c);
	
	if(m>=65 && p>=55 && c>=50){
		if(Total>=190 || m+p>=140){
			printf("\n congratulations candidate is eligible");
		}else{
			printf("\n sorry candidate is not eligible");
		}
	}
	
} 
