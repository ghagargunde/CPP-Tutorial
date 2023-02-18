//Passing Object as Function Argument

//complex number using 

#include <iostream>
using namespace std;

class complex{

    int a;
    int b;

    public:
        void setData(int v, int u){
            a = v;
            b = u;

        }
        void setDataBySum(complex obj1,complex obj2){
            a =obj1.a+obj2.a;
            b =obj1.b+obj2.b;

        }
        void printnum(){
            cout<<"Your Complex Num is "<<a<<" + "<<b <<"i"<<endl;

        }
};


int main (){

   complex c1,c2,c3;

   c1.setData(2,6);
   c1.printnum();
   c2.setData(8,7);
   c2.printnum();

   c3.setDataBySum(c1,c2);
   c3.printnum();



    return 0;
}