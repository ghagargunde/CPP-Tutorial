#include <iostream>
using namespace std;

class Base{
    int a;
    int b;
    public:
    //Base(int i, int j) : b(j), a(i+b) //The main thing to note here is that if we use the code shown below to initialize data members the compiler will throw an error because the data member “a” is being initialized first and the “b” is being initialized second so we have to assign the value to “a” data member first.
        
        //Base(int x,int y):a(x),b(y)
        Base(int i, int j) : a(i), b(a + j)   
        {
            cout<<"initializasion of constructor"<<endl;
            cout<<"The value of a is "<<a<<endl; 
            cout<<"The value of b is "<<b<<endl; 
        }
};

int main(){
    Base b(1,2);
    return 0;
}