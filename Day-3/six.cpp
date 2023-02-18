//functions in cpp

#include <iostream>

using namespace std;

/*
//creating function
int sum(int a, int b){
    int c = a+b;
    return c;
    
};
*/


// Function prototype

// type function-name (arguments);

// int sum(int a, int b); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable 
int sum(int, int); //--> Acceptable 
// void g(void); //--> Acceptable 
void g(); //--> Acceptable 



int main(){

    int num1 , num2;
    cout <<"Enter the first value: "<<endl;
    cin >>num1;
    cout <<"Enter the second value: "<<endl;
    cin>>num2;

    cout<<"The sum of a and b is "<<sum(num1,num2)<<endl;

    g();
    return 0;
}



//creating function
int sum(int a, int b){
    int c = a+b;
    return c;
    
};

void g(){
    cout<<"\nHello, Good Morning";
}