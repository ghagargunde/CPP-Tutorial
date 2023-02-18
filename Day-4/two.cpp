//Inline Function , Default Function, Constant Argument , Static variable


#include <iostream>
using namespace std;
//inline function
inline int product(int num1,int num2){     ///inline function 
    return num1*num2;
}
//static function
int StaticProduct(int num1,int num2){      
    static int c = 0;    //This execute only one 
    c = c+1;   //Next time this function is run , the vale of c will retained
    return (num1*num2)+c;
}
//default function
float moneyRec(int cuttentMoney,float factor=1.40){
    return cuttentMoney*factor;
}

int main(){
    int a, b;

    cout<<"Enter the first value: ";
    cin>>a;
    cout<<"Enter the second value: ";
    cin>>b;
    //Inline function calls
    cout<<endl;
    cout<<"inline function calls"<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<endl;
    //default function calls
    cout<<"default function calls"<<endl;
    cout<<"The product of a and b is "<<moneyRec(a)<<endl;
    cout<<"The product of a and b is "<<moneyRec(a,b)<<endl;
    cout<<endl;
    //static
    cout<<"static variale"<<endl;
    cout<<"The product of a and b is "<<StaticProduct(a,b)<<endl;
    cout<<"The product of a and b is "<<StaticProduct(a,b)<<endl;
    cout<<"The product of a and b is "<<StaticProduct(a,b)<<endl;

    return 0;

}