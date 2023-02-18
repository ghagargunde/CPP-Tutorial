//print the no from 1 to 100 using while and for loop
#include <iostream>
using namespace std;

int main(){
    int i = 1;
    //print no from 1 to 100 using while loop
    /*
    cout <<"print no from 1 to 100 using while loop"<<endl;
    while (i<101)
    {
        cout <<"The no is "<<i<<endl;
        i++;
    }
    */

    //print no from 1 to 100 using for loop

/*
    cout <<"print no from 1 to 100 using for loop"<<endl;
    for (int j = 1; j < 101; j++)
    {
        cout <<"The no is "<<j<<endl;
        
    }
*/
    //print the no using do-while loop
    int x = 0;
    
    //below ex. is for while condition is flase
    cout <<"below ex. is for while condition is flase. "<<endl;
    do
    {
        cout <<"The no is "<<x<<endl;
        
    } while (x>4);
    
    
    //below ex. is for while condition is true

    cout <<"below ex. is for while condition is true. "<<endl;
    do
    {
        cout <<"The no is "<<x<<endl;
        x++;
        
    } while (x<4);
    
    
    return 0;
    
}