
#include <iostream>
using namespace std;


int main(){
    int a = 5,b = 10;
    //Arithmatic operator
    cout <<endl;     //jump to new line 
    cout <<"Arithmatic operator \n";
    cout <<"The a + b is "<<a+b <<".\n";
    cout <<"The a - b is "<<a-b <<".\n";
    cout <<"The a * b is "<<a*b <<".\n";
    cout <<"The a / b is "<<a/b <<".\n";
    cout <<"The a % b is "<<a%b <<".\n";
    cout <<"The a++ is " <<a++ <<".\n";
    cout <<"The a-- is " <<a-- <<".\n";
    cout <<"The ++a is " <<++a <<".\n";
    cout <<"The  --a is "<< --a <<".\n";
    cout <<endl;


    //comparison operator   [0=false, 1=true]
    cout <<"Comparison operator \n";
    cout <<"The a == b is "<< (a==b) <<".\n";
    cout <<"The a > b is "<< (a>b) <<".\n";
    cout <<"The a < b is "<< (a<b) <<".\n";
    cout <<"The a != b is "<< (a!=b) <<".\n";
    cout <<"The a <= b is "<< (a<=b) <<".\n";
    cout <<"The a >= b is "<< (a>=b) <<".\n";
    cout <<endl;

    //logical operators
    cout <<"Logical operators \n";
    cout <<"The (a>=b) && (a<=b) is "<< ((a>=b) && (a<=b)) <<".\n";   //Logiacal AND operator 
    cout <<"The (a>=b) || (a<=b) is "<< ((a>=b) || (a<=b)) <<".\n";     //Logiacal OR operator
    cout <<"The !(a<=b) is "<<  !(a<=b) <<".\n";                        //Logiacal NOT operator
    cout <<endl;

    return 0;


}

