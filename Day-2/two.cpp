#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    //constant - we can not change the consant value 
    const int x = 67;
    cout <<"The value of constant x is "<<x<<endl;
    int a = 5, b = 6,c = 10;
    cout <<"The value of a was "<<a<<endl;

    a = 55;
    cout <<"The value of a is "<<a << ". We can change the value."<<endl;

    /*
    x = 55;
    cout <<"The value of x is "<<x << ". We cannot change the value of x bcoz x is constant."<<endl;
    */

   //manipulator
    cout <<"Manipulator"<<endl;
    cout <<"The value of a was "<<a<<endl;   //endl is a manipulator
    cout <<"The value of a was " <<setw(4)<<a<<endl;   //endl is a manipulator in iomanip header file. [right justify].

    //operator precedence

    a = b * 5+a;
    cout <<"The the sum of (b * 5 + a) is "<<a<<endl;


   return 0;


}