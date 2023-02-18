#include <iostream>
using namespace std;

void func1(int a){
    cout<<"The value of func1() is "<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<"I am templatised func1()  "<<a<<endl;
}


int main(){
    func1(55);  //exact match takes the highest priority
    func1('a');
    return 0;
}