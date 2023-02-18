#include <iostream>
using namespace std;

// Forward declaration
class complex;

class calculator{
    int e,f;
    public:
        int add(int num3,int num4){
            return num3 + num4;
        }

        int somerealComplex(complex,complex);
        int somecompComplex(complex,complex);
};



class complex{
    int a,b;
    public:
        // Individually declaring functions as friends
        //friend calculator :: somerealComplex(complex,complex);
        //friend calculator ::somecompComplex(complex,complex);

        // Aliter: Declaring the entire calculator class as friend
        friend class Calculator;

        
        void setNum(int x, int y){
            a = x;
            b = y;
        }
        void printNum(){
            cout<<"Your num is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int calculator :: somerealComplex(complex obj1,complex obj2){
            return (obj1.a + obj2.a);
        }

int calculator ::somecompComplex(complex o1,complex o2){
    return (o1.b+o2.b);
}

int main(){

    complex o1,o2;
    o1.setNum(3,6);
    o1.printNum();

    o2.setNum(11,4);
    o2.printNum();

    calculator sum;

    int result = sum.somerealComplex(o1,o2);
    cout<<"The sum of real part o1 and o2 is "<<result<<endl;

    int result2 = sum.somecompComplex(o1,o2);
    cout<<"The sum of real part o1 and o2 is "<<result2<<endl;



    return 0;
}