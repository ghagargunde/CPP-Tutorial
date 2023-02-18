/*
Pointer to Derived Class in C++
In C++ we are provided with the functionality to point the pointer to derived class or base class.
*/

#include <iostream>

using namespace std;

class BaseClass
{

public:
    int var_base=5;
    void display()
    {
        cout << "Displaying base class variable var_base " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived=4;
    void display()
    {
        cout << "Displaying base class variable var_base " << var_base << endl;
        cout << "Displaying derive class variable var_derive " << var_derived << endl;
    }
};
int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived= 134; // Will throw an error
    base_class_pointer->display();


    base_class_pointer->var_base = 3400; 
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();
    return 0;
}