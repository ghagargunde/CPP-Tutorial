//calculate nth position fibonacci series

#include <iostream>
using namespace std;


int fib(int num){
    if(num == 0 || num == 1){
        return 1;
    }
    return fib(num-2) + fib(num-1);
}

int main(){
    int a ;

    cout<<"Enter the no: ";
    cin>>a;

    cout <<"The term in fibonacci sequence at position"<<a <<" is "<<fib(a);

    return 0;


}