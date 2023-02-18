//STL  - Standard template library

#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector <T> &v){
    cout<<"displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)    //size()-give the size 
    {
       cout<<v[i] <<" ";
        //cout<<v.at(i);  //access element
    }
    cout<<endl;
    

}

int main(){
    //ways to create vector
    vector <int> obj1;   //zero lenght vector

    vector <char> obj2(4);//4-element
    //obj2.push_back('c');
    
    vector<char> obj3(obj2); //4 element character vector from obj2

    vector<int> obj4(6, 3); //6 element vector of 3's
    
    obj2.push_back('c');
    display(obj4);
    return 0;
}

