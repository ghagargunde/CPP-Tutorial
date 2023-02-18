//STL  - Standard template library

#include <iostream>
#include <vector>
using namespace std;

void display(vector <int> &v){
    for (int i = 0; i < v.size(); i++)    //size()-give the size 
    {
       cout<<v[i] <<" ";
        //cout<<v.at(i);  //access element
    }
    cout<<endl;
    

}

int main(){

    vector <int> obj1;   //zero lenght vector
    int element,size;
    cout<<"Enter the size of vector: ";
    cin>>size;
    for(int i= 0;i<size;i++){
        cout<<"Enter an element to add to this vector : ";
        cin>>element;
        obj1.push_back(element); //add element at the end
    }
    //obj1.pop_back();  //delete the last element


    display(obj1);
    
    //sytax for iterator
    vector<int> ::iterator iter = obj1.begin();
    
    //obj1.insert(iter,576);   //add 576 before position one
    //obj1.insert(iter+1,576);   //add 576 before position two
    
    obj1.insert(iter+1,4,576);   //add 576 before position two with 4 copies of 576
    display(obj1);
    return 0;
}

