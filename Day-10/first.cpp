// pointer revision

#include <iostream>
using namespace std;

int main(){
    int a = 50;
    int* ptr = &a;
    cout<<"The value of a is "<< *(ptr)<<endl;

    //new operator
    int *ptr2 = new int(40);
    cout<<"The value of ptr2 is "<< *(ptr2)<<endl;

    //array-dynamic memory allocation

    int *arr = new int[3];
    arr[0]=5;
    
    //you also use below systax for assining the value
    *(arr+1)=2;
    
    arr[2]=3;
    
    cout<<"The value of arr[0] is "<< (arr[0])<<endl;
    cout<<"The value of arr[1] is "<< (arr[1])<<endl;
    cout<<"The value of arr[2] is "<< (arr[2])<<endl;

    //delete operator-free kr dega array ko
 

    int *arr1 = new int[3];
    arr1[0]=50;
    
    //you also use below systax for assining the value
    *(arr1+1)=20;
    
    arr1[2]=30;
    delete [] arr1;
    cout<<"The value of arr[0] is "<< (arr1[0])<<endl;
    cout<<"The value of arr[1] is "<< (arr1[1])<<endl;
    cout<<"The value of arr[2] is "<< (arr1[2])<<endl;

    return 0;
}