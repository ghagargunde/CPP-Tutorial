//call by value and call by reference
//swap the two number
#include <iostream>
using namespace std;

/*    //method one for call by reference using pointers
void swap(int* a , int* b) {
    int d = *a;
    *a = *b;
    *b = d;
}
*/ 

//method two [A] for call by reference in c++ reference Variables
void swap(int  &a , int &b) {
    int d = a;
    a = b;
    b = d;
}

/*
//method two [B] for call by reference in c++ reference Variables

int & swapReferenceVar(int  &a , int &b) {
    int d = a;
    a = b;
    b = d;
    return a;
}
*/


/* //call by value 
void swap(int a , int b) {
    int d = a;
    a = b;
    b = d;
}
*/

int main()
{
    int x = 5, y = 9;
    cout<<"The value of x is "<<x<<" and value of y is "<<y<<endl; 
  //  swap(x,y);     //this will not work bcoz we can't change the value of local variable directly
 
 //   swap(&x,&y);   //method one 
 
    swap(x,y);    //method two [A]
 
  //  swapReferenceVar(x, y) = 766; //method two [B] //This will swap a and b using reference variables  //from this we will give the 766 to a
    
    cout<<"The value of x is "<<x<<" and value of y is "<<y<<endl; 


    return 0;

}