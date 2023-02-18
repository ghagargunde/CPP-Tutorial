//selection structure : switch case statement
#include <iostream>
using namespace std;

int main(){
    int age;
    cout <<"Enter the age : ";
    cin >>age;

    switch (age)
    {
    case 18:
        cout <<"The age is 18";
        break;    //if we can't add break then following case's are also run 
    case 22:
        cout <<"The age is 22";
        break;
    case 8:
        cout <<"The age is 8";
        break;
    
    default:
        cout <<"No special cases";
        break;
    }
    return 0;
}