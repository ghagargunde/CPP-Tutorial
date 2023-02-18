//Array of Objects Using Pointers in C++ 


#include <iostream>
using namespace std;

class shopItem{
    int id;
    float price;
    public:
        void setData(int x,int y){
            id = x;
            price = y;
        }
        void getData(){
            cout<<"code of this item is "<<id<<endl;
            cout<<"price of this item is "<<price<<endl;
        }
};

int main(){
    
    //array of object
    int size = 2;
    int i ,p;
    float q;
    shopItem *ptr = new shopItem[size];
   shopItem *ptrTemp = ptr;

   for ( i = 0; i < size; i++)
   {
    cout<<"Enter id and price of item: "<<i+1<<endl;
    cin>>p>>q;
    ptr->setData(p,q);
    ptr++;
   }

   for ( i = 0; i < size; i++)
   {
    cout<<"Item Number: "<<i+1<<endl;
    ptrTemp->getData();
    ptrTemp++;
   }
   
    return 0;
}