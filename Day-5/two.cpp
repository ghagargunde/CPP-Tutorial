// Stroustrup initially named C++ language as C with classes because C++ language was almost the same as C language but they added a new concept of classes in it.
// Classes are the extension of structures in C language.
// Structures had limitations such as; members are public and no methods.
// Classes have some additional futures than structures such as; classes that can have methods and properties.
// Classes have a feature to make class members as public and private.
// In C++ objects can be declared along with class deceleration as shown in Code below.
/*
class Employee{
            // Class definition
} harry, rohan, lovish;
*/

//nestig of member function
//code is check no is binary or not

#include <iostream>
#include <string>

using namespace std;

class Binary
{
    string s;
    void check_binary(void);

public:
    void read(void);
    void ones_complement(void);
    void display(void);
};
void Binary ::read(void)
{
    cout << "Enter the Number: ";
    cin >> s;
}
void Binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++) // s.length() gives the lenth of string
                                         // cout<<"This is string "<<i<<endl;
    {

        /* code */
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid Binary Format." << endl;
            exit(0); // exit with error code of 0
        }
    }
}

void Binary ::ones_complement(void)
{
    // nesting of member function
    check_binary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void Binary ::display(void)
{
    cout << "Displaying Your Binary Number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    Binary number;
    number.read(); // call the function
    //number.check_binary();
    number.display();
    number.ones_complement();
    number.display();
    return 0;
}