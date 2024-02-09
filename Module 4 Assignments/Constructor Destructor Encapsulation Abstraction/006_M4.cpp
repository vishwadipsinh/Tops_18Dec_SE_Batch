/*
6. Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor
*/
#include<iostream>
using namespace std;
class employee{
	private:
		char name[20],id[20],per;
		double salary;
		
	public:
	
		employee(){
			cout<<" Enter Employee Name : ";cin>>name;
			cout<<" Enter Employee ID : ";cin>>id;
			cout<<" Select Performance of Employee  \n (A) Great  \n (B) Good  \n (C) Average  \n (D) Bad  \n (E) Worst \n";cin>>per;
			
			if(per=='A' || per=='a'){
				salary = 80000;
			}else if(per=='B' || per=='b'){
				salary = 70000;
			}else if(per=='C' || per=='c'){
				salary = 60000;
			}else if(per=='D' || per=='d'){
				salary = 40000;
			}else if(per=='E' || per=='e'){
				salary = 20000;
			}else{
				cout<<"\n Wrong Input\n";
			}
		}
		void print_data(){
			cout<<"\n Name :"<<name;
			cout<<"\n Employee ID :"<<id;
			cout<<"\n Salary :"<<salary;
		}
};

int main(){
	employee e1;
	e1.print_data();
}
