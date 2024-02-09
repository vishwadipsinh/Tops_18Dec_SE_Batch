/*
5. Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.
*/

#include<iostream>
using namespace std;
class triangle{
	private:
		double l1,l2,l3;
	public:
		void get_data(){
			cout<<"\n enter 1st. Side of Triangle : ";cin>>l1;
			cout<<" enter 2nd. Side of Triangle : ";cin>>l2;
			cout<<" enter 3rd. Side of Triangle : ";cin>>l3;
		}
		void result(){
			if(l1==l2 && l2==l3){
				cout<<"\n Triangle is Equilateral";
			}else if(l1==l2 || l2==l3 || l1==l3){
				cout<<"\n Triangle is Isosceles";
			}else{
				cout<<"\n Triangle is Scelene";
			}
		}
};

int main(){
	triangle t1;
	t1.get_data();
	t1.result();
}
