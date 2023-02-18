/*
this keyword or this Pointers in C++

*/

#include <iostream>
using namespace std;

class A{
    int a;
    public:
        void setdata(int a){
            this->a=a;
            
        }

        
        void getdata(){
            cout<<"The value of a is "<<a<<endl;
        }


        A & setdata1(int a){
            this->a=a;
            return *this;
            
        }
        void getdata1(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
   A a;
   a.setdata(4);
   a.getdata();

   a.setdata1(5).getdata1();
    return 0;
}