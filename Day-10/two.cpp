/*
Pointer to objects in C++
As discussed before pointers are used to store addresses
of variables which have data types like int, float, double etc. 
But pointer can also store the address of an object
*/

#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
        void setdata(int x,int y){
            a=x;
            b=y;
        }
        void getdata(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
};

int main(){
    complex c1;
    complex *ptr =&c1;
    (*ptr).setdata(75,6);
    (*ptr).getdata();
    c1.setdata(4,6);
    c1.getdata();

    //new operator
    complex *ptrNew = new complex;
    (*ptrNew).setdata(90,44);
    (*ptrNew).getdata();

    //arrow operator
    complex *ptrarrow = new complex;
    ptrarrow->setdata(11,5);
    ptrarrow->getdata();

    //array of object
    complex *ptrarrow1 = new complex[4];
    ptrarrow1->setdata(21,45);
    ptrarrow1->getdata();
    return 0;
}