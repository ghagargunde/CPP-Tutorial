//factorial of number 

#include <iostream>

using namespace std;

int factorial(int num){
    if ( num==0 || num ==1 ){
        return 1;

    }else{
        return num * factorial(num-1);
    }
}

int main(){
    int a;
    cout<<"Enter the no: ";
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;

    return 0;

}