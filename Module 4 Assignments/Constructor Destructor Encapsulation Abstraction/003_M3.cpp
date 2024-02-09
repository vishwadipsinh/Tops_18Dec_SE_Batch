/*
3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.
*/
#include<iostream>
using namespace std;
class car{
	private:
        double year;
		char company[10],model[10];
	public:
		void get_data(){
			cout<<"\nenter Company name : ";cin>>company;
			cout<<" enter Model : ";cin>>model;
			cout<<" enter Year : ";cin>>year;
		}
		void print_data(){
			cout<<"\n Company :"<<company;
			cout<<"\n Model : "<<model;
			cout<<"\n Year : "<<year;
		}
};
int main(){
	car c1;
	c1.get_data();
	c1.print_data();	
}
