#include <iostream>
using namespace std;

class Y;
class X {
    int data;
    friend void add(X,Y);
    public:
        void setValue(int value){
            data = value;
        }
};
class Y {
    int num;
    friend void add(X,Y);
    public:
        void setValue(int value){
            num = value;
        }

};

void add(X o1, Y o2){
    cout<<"The summing of x and y give me "<< o1.data + o2.num;
}


int main(){
    X a1;
    a1.setValue(45);
    Y a2;
    a2.setValue(45);

    add(a1,a2);
    
}