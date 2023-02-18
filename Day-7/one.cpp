//Constructors in C++

/*
A constructor is a special member function with the same name as the class. 
The constructor doesn’t have a return type. 
Constructors are used to initialize the objects of its class. 
Constructors are automatically invoked whenever an object is created.
*/
/*
Important Characteristics of Constructors in C++

A constructor should be declared in the public section of the class
They are automatically invoked whenever the object is created
They cannot return values and do not have return types
It can have default arguments
We cannot refer to their address

*/

#include <iostream>

using namespace std;

class complex{
    int a,b;

    public:
        //creating constructor
        complex(void);    //contructor declaration
        
        printNum(){
            cout<<"Your Complex Number is "<<a <<" + "<<b<<"i"<<endl;
        }
};
complex :: complex(void) // ----> This is a default constructor as it takes no parameters
{ 
    a=10;
    b=55;
}

int main(){
    //cout <<"Hello World";
    complex c1;
    c1.printNum();
    return 0;
}