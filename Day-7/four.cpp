//default constructor

#include <iostream>
using namespace std;

class method{
    int data1,data2,data3;
    public:
        method(int a,int b=8,int c=5){
            data1=a;
            data2=b;
            data3=c;
        }
        void printData();
};
void method ::printData(){
    cout<<"The value of data1, data2 and data3 is "<<data1<<","<<data2<<","<<data3<<endl;
}

int main(){
    method c1(1);
    c1.printData();
    method c2(1,55);
    c2.printData();
    method c3(1,4,6);
    c3.printData();
    return 0;
}