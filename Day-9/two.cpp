//Ambiguity Resolution in Inheritance in C++

/*
Ambiguity in inheritance can be defined as when one class is derived for two
or more base classes then there are chances that the base classes have functions with the same name. 
So it will confuse derived class to choose from similar name functions. 
To solve this ambiguity scope resolution operator is used “::”.
*/

#include <iostream>
using namespace std;

class Base1{
    public:
        void setval(){
            cout<<"hello samyak"<<endl;
        }
};
class Base2{
   public:
        void setval(){
            cout<<"hello nikky"<<endl;
        }
};

//multiple inheritance
class Derive : public Base1,public Base2{
   
   
   //ambiguity 1
    public:
        void setval(){

        Base2 ::setval();
        }
        
};
int main(){
   Derive der;
   der.setval();
    return 0;
}