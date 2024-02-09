/*
4. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.
*/
#include<iostream>
using namespace std;
class circle{
	private:
		double r;
		float pi=3.14;
	public:
	//area = pi*r*r
    //circumference = 2*pi*r
		float area(double r){
		return (pi*r*r);
		}
		float circumferencec(double r){
			return (2*pi*r);
		}
};

int main(){
	double r;
	cout<<"\n Enter Radious for Circle : "; cin>>r;
	circle c1;
	
	cout<<"\n Area of Circle is :"<<c1.area(r);
	cout<<"\n Circumference of Circle is :"<<c1.circumferencec(r);
}
