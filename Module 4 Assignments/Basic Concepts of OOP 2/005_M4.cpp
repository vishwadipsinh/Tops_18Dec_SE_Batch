/*
5. Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.
*/
#include <iostream>
using namespace std;
class rectangle{
    private:
    double p,a,w,l; //w=width,l=length,a=area,p=perimeter
    
    public:
    void get_value(double y, double z){
        w=y;
        l=z;
    }
        double area(){
        return a=w*l;
        }
        double perimeter(){
        return p=(l+w)*2;
        }
};

int main() {
    float a,p,w,l;
    rectangle a1;
    
    cout<<"\n Hello, Enter Below Values for Calculation \n";
    
    cout<<"Enter Width w=";
    cin>>w;
    cout<<"Enter Length l=";
    cin>>l;
    a1.get_value(w,l);
    cout<<"\n Area of Rectangle is:"<<a1.area();
    cout<<"\n Perimeter of Rectangle is:"<<a1.perimeter();

    return 0;
}
