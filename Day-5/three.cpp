//memory allocation using array in class


#include <iostream>
using namespace std;

class store {
    int itemId[100];
    int itemPrice[100];
    int counter;
    
    public:
    
    void initCounter(void) {counter = 0;}
    void setPrice(void);
    void displayPrice(void);
};

void store :: setPrice(void){
    cout<<"Enter Id of your item no "<<counter + 1 <<" : " ;
    cin>>itemId[counter];
    cout<<"Enter price of item : ";
    cin>>itemPrice[counter];
    counter++;
}

void store :: displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        /* code */
        cout<<"The Price of item with Id " << itemId[i] << " is " << itemPrice[i]<<"."<<endl;
    }
    
}

int main(){
    int item;
    store dukan;    //creating the object
    dukan.initCounter();

    cout<<"Enter the No of item you need : ";
    cin>>item;

    for (int i = 0; i < item; i++)
    {
        dukan.setPrice();
        
    }
    
    dukan.displayPrice();
    return 0;
}