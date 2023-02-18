//union and enum


#include <iostream>
using namespace std;


//creating union data type 
union money
{
    int rice;
    char car;
    float daal;
};


int main()
{

    //union
    cout << "union datatype"<<endl;
    union money m1;
    m1.car='m';
    m1.daal=585;
    m1.rice=58;

    cout<< m1.rice<<endl;

    //
    //cout << m1.car<<endl;
    //cout<< m1.daal<<endl;

    //enul data type 

    cout << "enul datatype"<<endl;
    enum meal {breakfast,lunch,dinner};  //creating the enum datatype which consist of name constant which make the code readable.

    cout <<breakfast<<endl;
    cout <<lunch<<endl;
    cout <<dinner<<endl;
//this is also possibe 
    cout<<"check the condition using enum"<<endl;
    meal m5 = lunch;
    cout<<(m5==2);




    return 0;
}