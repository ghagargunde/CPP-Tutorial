#include <iostream>
using namespace std;


int main(){
    int num;

    cout <<"Enter the no:" ;
    cin >>num ;
    cout <<"The Multiplication table of " <<num;
    for (int i = 0; i <= 10; i++)
    {
            cout <<i*num <<endl;
        };


    return 0;
    

}