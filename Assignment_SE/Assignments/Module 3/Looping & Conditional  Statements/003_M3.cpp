/* 
3. WAP to take 10 no. Input from user find out below values
	a. How many Even numbers are there
	b. How many odd numbers are there
	c. Sum of even numbers
	d. Sum of odd numbers
*/ 



#include<stdio.h>
int main(){
	int a,b=0,c=0,d=0,e=0,i=1;
	
	
	
		
	while(i<=10){
		printf("\n Enter number %d : ",i);
		scanf("%d",&a);
		
		if(a%2==0){
			b=b+a;
			c++;
			printf("%d",a);
		}else{
			d=d+a;
			e++;
			printf("%d",a);
		}
		i++;
	}
	
	printf("\n Total even number= %d  ",c);
	printf("\n Total odd number= %d ",e);	
	printf("\n sum of even number= %d ",b);
	printf("\n sum of odd number= %d ",d);

}

