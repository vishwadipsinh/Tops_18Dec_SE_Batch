/*
2). Write a C++ Program to find Area of Rectangle using inheritance
*/

#include<iostream>
using namespace std;
class area{
	protected:
		double w,l;
	public:
		void get_data(int x, int y){
			w=x;
			l=y;
		}
};
class rectagnle:public area{
	public:
		void print_area(){
			cout<<"\n Area of rectangel  is "<<w*l;
		}
};

int main(){
	int m,n;
	rectagnle r1;
	cout<<"\n Enter length of rectangle : ";cin>>m;	
	cout<<" Enter width of rectangle : ";cin>>n;
	r1.get_data(m,n);
	r1.print_area();
}
