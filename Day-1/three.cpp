//local and global variable 
//scope of local and global variable

#include <iostream>
using namespace std;

int global_vari = 10;
void sum(){
    int local_vari = 5;
    cout<<"This is local variable "<<local_vari <<"\n";
}

int main()
{
    int a = 10 , b = 5 ;
    char c = 'b';

    cout <<"The value of a is "<<a <<" \nThe value of b is "<<b <<" \nthe value of c is "<<c <<"\n";
    sum();  //calling the function
    cout <<"This is global variable value "<<global_vari;
    return 0;
}
