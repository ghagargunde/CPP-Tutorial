//Class Templates with Default Parameters

#include <iostream>
using namespace std;

template <class T1=int,class T2=float>
class myclass{
    T1 a;
    T2 b;
    public:
        myclass(T1 x,T2 y){
            a=x;
            b=y;
        }
        void dispay(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
};

int main(){

    //type 1
    myclass <> obj(54,4.25);
    obj.dispay();
    cout<<endl;


    //type 2
    myclass <char,int> obj2('s',55);
    obj2.dispay();

    return 0;
}