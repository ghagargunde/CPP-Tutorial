#include <iostream>
using namespace std;


/*
****
****
****
****
*/
int main(){
  /*  int row , colum;
    cout<<"Enter the row count";
    cin>>row;
    cout<<"Enter the colum count";
    cin>>colum;
    */
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j< i; j++)
        {
            if (j==1)
            {
                /* code */
            }
            
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    return 0;
}