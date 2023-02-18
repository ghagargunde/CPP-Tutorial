// constructor overloading
#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    // constructor overloading


    complex()   //default constructor
    {
        a = 0;
        b =0;
    } 


    complex(int, int); // declaration of parameterized construction

    complex(int);      // declaration of parameterized construction

    printNum()
    {
        cout << "Your complex no is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters

{
    a = x;
    b = y;
}
complex ::complex(int x) // ----> This is a parameterized constructor as it takes 1 parameters
{
    a = x;
    b = 0;
}

int main()
{
    // no argument
    complex c1;
    c1.printNum();
    // two argument
    complex c2(44, 55);
    c2.printNum();

    // single argument
    complex c3 = complex(9);
    c3.printNum();

    return 0;
}