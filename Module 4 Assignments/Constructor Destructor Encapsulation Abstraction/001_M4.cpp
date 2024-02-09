/*
1. Write a program to find the multiplication values and the cubic values using inline function
*/

#include<iostream>
using namespace std;
class values{
	public:
		inline void multiplication(int x){
			cout<<" Multiplication of "<<x<<" is "<<x*x;
		}
		inline void cubic(int x){
			cout<<" cubic value of "<<x<<" is "<<x*x*x;
		}
};

int main(){
	values v1;
	int n1,n2;
	
cout<<"\n Enter number to find out Multiplication Value : ";cin>>n1;
	v1.multiplication(n1);
	
cout<<"\n\n Enter number to find out Cubic Value : ";cin>>n2;
	v1.cubic(n2);	

    
}
