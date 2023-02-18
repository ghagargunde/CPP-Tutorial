#include <iostream>
using namespace std;

int main(){
    int a[4] = {5,8,6,9};
    int* b=a;
    cout<<"The address of b "<<b<<endl;
    cout<<"The address of b "<<&a<<endl;
    cout<<"The value of b "<<*(b)<<endl;
    cout<<"The value of b "<<*(b+1)<<endl;
    cout<<"The value of b "<<b<<endl;
    cout<<*(b++);
    cout<<*(--b);

    return 0;
}