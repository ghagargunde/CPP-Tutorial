//array of object 

#include <iostream>
using namespace std;

class Employee{

    int id ;
    int salary;

    public:
        void setId(void){
            cout<<"Enter the Id of Emp : ";
            cin>>id;

        }
        void getId(void){
            cout<<"The id of this EMP is "<<id<<endl;
        }
};


int main (){

    Employee fb[4];

    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    


    return 0;
}