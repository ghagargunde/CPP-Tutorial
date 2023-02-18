#include <iostream>
using namespace std;

class Base{
    int data1;// private by default and is not inheritable
    public:
        int data2;
        void setData1(void){
            data1 = 5;
            data2 = 6;
        }
        int getData1(){
            return data1;

        }
        int getData2(){
            return data2;
        }
        
};

class Derive : public Base{
    int data3;
    public:
        void process();
        void display();
};

void Derive ::process(){
    data3=data2*getData1();    // it means data3=data2*data1
}
void Derive ::display(){
    cout<<"The value of Data 1 is "<< getData1()<<endl;
    cout<<"The value of Data 2 is "<<data2<<endl;
    cout<<"The value of Data 3 is "<<data3<<endl;
}




int main(){
    Derive der;
    der.setData1();
    der.process();
    der.display();
    return 0;
}