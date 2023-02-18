#include <iostream>
using namespace std;

struct employee
{
    int name;
    char surname;
};


int main()
{
    employee c1;
    c1.name = 11;
    c1.surname='g';
    cout<<c1.name<<endl;
    cout<<c1.surname<<endl;
    
    return 0;
}