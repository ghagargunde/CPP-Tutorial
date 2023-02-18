#include <iostream>
using namespace std;


int c = 67;

int main(){
    //for scope resolution operator
    int a , b,c;
    cout <<"Enter the no: ";
    cin >>a;
    cout<<"Enter the no: ";
    cin>>b;
    c = a + b ;
    cout<<"The sum of a and b is "<<c <<endl;
    
    cout<<"The value of c "<<c <<endl;

    cout<<"The value of c "<<::c <<endl;   // scope resolution operator to print the global value while having same variable name [local and global]
    
    cout<<endl;
    
    //literals
    cout <<"Literals" <<endl;
    
    cout <<"The sizeof no is "<<sizeof(34.58)<<endl;
    cout <<"The sizeof no is "<<sizeof(34.58f)<<endl;
    cout <<"The sizeof no is "<<sizeof(34.58F)<<endl;
    cout <<"The sizeof no is "<<sizeof(34.58l)<<endl;
    cout <<"The sizeof no is "<<sizeof(34.58L)<<endl;

    cout<<endl;

    //Reference variable
    cout <<"Reference Variable"<<endl;

    float x = 35.2;
    float & y = x ;

    cout <<"The value of x is "<<x<<endl;
    cout <<"The value of y is "<<y<<endl;
    
    cout<<endl;

    //Type casting
    cout <<"Type casting"<<endl;
    float z = 5258.4;

    cout <<"The value of z is "<<int(z)<<endl; 
    cout <<"The value of z is "<<(float)z<<endl; 

    return 0;
}