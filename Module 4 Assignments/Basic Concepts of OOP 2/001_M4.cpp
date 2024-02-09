/*
1. WAP to create simple calculator using class
*/

#include <iostream>
using namespace std;
class calculator{
    public:
    int a,b;
    
    public:
    void get_value(int x, int y){
        a=x;
        b=y;
    }
    int sum(){
        return a+b;
    }
    int sub(){
        return a-b;
    }
    int mul(){
        return a*b;
    }
    int div(){
        return a/b;
    }
};

int main() {
    int a,b;
    calculator c1;
    
    cout<<"\n Hello Students Enter Value of a and b for Calculation\n";
    
    cout<<"\n a= ";
    cin>>a;
    cout<<"\n b= ";
    cin>>b;
    c1.get_value(a,b);
    cout<<"\n SUMMATION is :"<<c1.sum();
    cout<<"\n SUBTRACTION is :"<<c1.sub();
    cout<<"\n MULTIPLICATION is :"<<c1.mul();
    cout<<"\n DIVISION is :"<<c1.div(); 
    
    return 0;
}
