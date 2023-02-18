//structure 

#include <iostream>

using namespace std;


//creating the structure keyword

//method 1
struct employee
{
    int id;
    char name;
    float salary;
}samyak;   //samyak is variable

//method 2
struct payment
{
    int id;
    char name;
    float f_no;
};


typedef struct school
{
    int id;
    char name;
    float salary;
}sc;   // using typedef keyword

int main(){
    
    cout <<"Method 01"<<endl;
    samyak.id=55;
    samyak.name='s';
    samyak.salary=5442;
    cout<<"The value of "<<samyak.id<<endl;
    cout<<"The value of "<<samyak.name<<endl;
    cout<<"The value of "<<samyak.salary<<endl;

    //method 2
    
    cout <<"Method 02"<<endl;
    
    //we can create multiple variable using stucture
    
    struct payment rahul;   //define variable
    struct payment santosh;   //define variable

    rahul.id =55;
    rahul.name ='r';
    rahul.f_no = 7030;
    cout<<"The value of "<<rahul.id<<endl;
    cout<<"The value of "<<rahul.name<<endl;
    cout<<"The value of "<<rahul.f_no<<endl;
    
    
    santosh.id =45;
    santosh.name ='s';
    santosh.f_no = 8030;
    cout<<"The value of "<<santosh.id<<endl;
    cout<<"The value of "<<santosh.name<<endl;
    cout<<"The value of "<<santosh.f_no<<endl;

    //method 3

    cout <<"Method 03"<<endl;
    sc dikshant ;

    dikshant.id =45;
    dikshant.name ='s';
    dikshant.salary = 500002164;
    cout<<"The value of "<<dikshant.id<<endl;
    cout<<"The value of "<<dikshant.name<<endl;
    cout<<"The value of "<<dikshant.salary<<endl;



    return 0;

}
