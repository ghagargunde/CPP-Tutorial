#include <iostream>
#include <list>


using namespace std;


void display(list<int> &lst){
    list <int> :: iterator it;
    for (it=lst.begin();it !=lst.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}
int main(){
    list<int> obj1;  //empty list of 0 lenght

    obj1.push_back(3);
    obj1.push_back(2);
    obj1.push_back(4);
    obj1.push_back(5);

    display(obj1);

    
    //display(obj2);
    //obj1.pop_back();  //delete from last

    //display(obj1);
    
    //obj1.pop_front();    //delete from front
    //display(obj1);

    //obj1.remove(2);   //remove 2 from list
    //display(obj1);


    //how to sort 
    obj1.sort();    
    display(obj1);

     
    //reverse list
    obj1.reverse();
    display(obj1);

    list<int> obj2(3);  //empty list of 3 lenght

    list<int> :: iterator it = obj2.begin();

    *it =55;
    it++;
    *it =44;
    it++;
    *it =99;
    it++;

    //how to merge lists

    obj1.merge(obj2);
    display(obj1);
   


    return 0;
    
}