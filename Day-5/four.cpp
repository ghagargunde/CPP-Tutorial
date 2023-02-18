// static data member and static member function/method
// count is a static data member of class employee

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the Employee ID: ";
        cin >> id;
        cout << "The value of count " << count << endl;
        count++;
        cout << "The value of count " << count << endl;
    }
    void getData(void)
    {
        cout << "The ID of this Employee is " << id << ". and this is employee no " << count << endl;
    }
    // static member function
    static void getCount(void)
    {
        // cout<<id;  //throw an error
        cout << "The value of count is " << count << endl;
    }
};
// count iis a static data member of class employee
int Employee ::count; // default value 0

// int Employee :: count=1000;    //if you need to start count 1000 then you can use this syntax

int main()
{
    Employee harry, samyak;
    harry.setData();
    harry.getData();

    // calling the static member function
    Employee ::getCount();

    samyak.setData();
    samyak.getData();
    Employee ::getCount();
    return 0;
}