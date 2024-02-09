/*
2. Write a program of Addition, Subtraction, Division, Multiplication using constructor.
*/
#include<iostream>
using namespace std;

class calculator{
	private: 
		double add,sub,mul,divi,a,b;

	public:
		calculator(double x, double y){
			a=x;
			b=y;
			add = a+b;
			sub = a-b;
			mul = a*b;
			divi = a/b;
		}
		
		void print_add(){
			cout<<"\n Addition is "<<add;
		}
		void print_sub(){
			cout<<"\n Subtraction is "<<sub;
		}
		void print_mul(){
			cout<<"\n Multiplication is "<<mul;
		}
		void print_divi(){
			cout<<"\n Division is "<<divi;
		}
};

int main(){
	double m,n;
	
	cout<<"\n Enter 1st. value : ";cin>>m;
	cout<<"\n Enter 2nd. value : ";cin>>n;	
	
	calculator c1(m,n);
	c1.print_add();
	c1.print_sub();
	c1.print_mul();
	c1.print_divi();	
}
