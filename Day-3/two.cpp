//pointers: Store the address of variable


#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int* b = &a;

    cout<<"The value of a is "<<a<<endl;
    
    //  '*' is dereferencing
    cout<<"The value of b is "<<*b<<endl;

    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    
    //pointer to pointer 
 
    int ** c = &b;

    cout<<"The value of c is "<<*c<<endl;     //give b
    cout<<"The value of c is "<<**c<<endl;    //give the value a
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    
    
    return 0;
}