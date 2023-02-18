//function overloading

#include <iostream>
using namespace std;

int sum(int a,int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}

//overloading
int product(int a){
    return (a*a*a);
}
int product(int a, int b){
    return (3.14*a*a*b);
}
int product(int a,int b, int c){
    return (a*b*c);
}

int main(){
    cout<<"The sum of 3 and 4 is "<<sum(3,4)<<endl;
    cout<<"The sum of 3, 4, 5 is "<<sum(3,4,5)<<endl;
    cout<<endl;

    cout<<"The volume of cylinder is "<<product(3,2)<<endl;
    cout<<"The volume of cube is "<<product(2)<<endl;
    cout<<"The volume of rectangular box is "<<product(3,2,4)<<endl;
    return 0;
}