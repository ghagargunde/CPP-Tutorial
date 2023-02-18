//oops 

//class 


#include <iostream>

using namespace std;

class Employee       //creatin class
{
    // Access Modifier Private and public
private:   
    int a , b , c;
public:
    int d, e;
    //two ways to define function
    //first way
    void setData(int x,int y,int z);  //declaration  
    
    //declaration of function is define inside the “employee” class
    //second way
    void getData(){    
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;

    };
    
};

void Employee::setData(int x, int y, int z)      //“setData” function is define outside the “employee” class by using a scope resolution operator[::]
{
    a = x;
    b = y;
    c = z;
}


int main()
{
    Employee samyak;

    samyak.d=45;
    samyak.e=78;

    samyak.setData(1,2,3);
    samyak.getData();



    return 0;
}