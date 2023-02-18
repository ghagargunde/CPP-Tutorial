//Function Templates & Function Templates with Parameters

#include <iostream>
using namespace std;

template <class T1,class T2>

/*
//sum of two no
float summ(T1 a,T2 b){
    float c = a+b;
    return c;
}
int main(){
    cout<<summ(4.55,5);
    return 0;
}

*/

float funcAverage(T1 a,T2 b){
    float avg = (a+b)/20;
    return avg;
}

int main(){
    float a;
    a=funcAverage(10,30);
    printf("The Average of these number is %f ",a);

    return 0;
}