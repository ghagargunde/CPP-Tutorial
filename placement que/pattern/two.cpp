#include <iostream>
using namespace std;


int main(){

    int row , colum;
    cout<<"Enter the row count: ";
    cin>>row;
    cout<<"Enter the colum count: ";
    cin>>colum;

    for (int i = row; i >= 1; --i)
    {
        for (int j = 1 ; j <= i; ++j)
        {
            cout<<"*";
           
        }
        cout<<endl;
        

    }
    
    return 0;
}