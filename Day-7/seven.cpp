#include <iostream>
using namespace std;


// Destructor never takes an argument nor does it return any value
int count=0;
class Number{
    
    public:
       
        Number(){
            count++;
            cout<<"Constructor is calling "<<count<<endl;
        }
        ~Number(){
            cout<<"Distructor is calling "<<count<<endl;
            count--;
        }
};


int main(){
    cout<<"main function"<<endl;

    Number c1;
    {
        cout<<"We are Entering scope.............."<<endl;
        Number c2,c3;
        cout<<"Exiting the scope.........."<<endl;
    }
    cout<<"We are in main function"<<endl;

    return 0;
}