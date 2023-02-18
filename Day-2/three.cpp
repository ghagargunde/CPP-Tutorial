//if-else statement , if-else ladder and switch case

#include <iostream>
using namespace std;

int main(){

    int age , b = 0;

    cout <<"Enter your age: ";
    cin >>age; 
//selection coontrol - if else condition
    if(age>12){
        cout <<"You are invited " ;

    }
        
    else if(age==18){
        cout <<"we are same age. " ;

    }
    else{
        cout <<"The not valid";
    }

   
    return 0;


}