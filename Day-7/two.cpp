#include <iostream>

using namespace std;

class complex{
    int a,b;

    public:
        complex(int, int); //declaration of parameterized construction
        printNum(){
            cout<<"Your complex no is "<<a<<" + "<<b<<"i"<<endl;

        }
};
complex ::complex(int x,int y)  // ----> This is a parameterized constructor as it takes 2 parameters
{
{ 
    a=x;
    b=y;
}

int main(){
    // Implicit call
    complex c1(44,55);
    c1.printNum();
    
    // Explicit call
    complex c2 =complex(8,9);
    c2.printNum();

    return 0;
}