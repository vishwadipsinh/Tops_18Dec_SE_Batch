/*
6. Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.
*/
#include<iostream>
using namespace std;

class person{
	private:
		int age;
		char country[10],name[10];
	public:
		void get_data(){
			cout<<"\n enter Name of Person : "; cin>>name;
			cout<<" enter Person's Age : "; cin>>age;
			cout<<" enter Country Name : "; cin>>country; 
		}
		void print_data(){
			cout<<"\n Name : "<<name;
			cout<<"\n Age : "<<age;
			cout<<"\n Country : "<<country;
		}
};

int main(){
	person p1;
	p1.get_data();
	p1.print_data();
}
