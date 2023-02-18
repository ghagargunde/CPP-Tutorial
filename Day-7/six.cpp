/*
Copy Constructor in C++
A copy constructor is a type of constructor that creates a copy of another object. 
If we want one object to resemble another object we can use a copy constructor. 
If no copy constructor is written in the program compiler will supply its own copy constructor.
*/

#include <iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){  //default constructor
            a = 0;
        }
        Number(int b){
            a = b;
        }
        Display(){
            cout<<"The no for object is "<<a<<endl;
        }

        //copy constructor
        
            // When no copy constructor is found, compiler supplies its own copy constructor
        Number (Number &obj){
            cout<<"Copy constructor called...... !!!!\n";
            a= obj.a;
        }
};

int main(){

    Number x,y,z(45);
    x.Display();
    y.Display();
    z.Display();

    Number c1(z); // Copy constructor invoked
    c1.Display();

    Number c2=y; // Copy constructor invoked
    c2.Display();
    return 0;
}