//coordinate of x and y using parameterrize constructor  

#include <iostream>

using namespace std;

class point{
    int x,y;

    public:
        point(int a, int b){
            x=a;
            y=b;
        }; 
        printNum(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;

        }
};


int main(){
    // Implicit call
    point c1(44,55);
    c1.printNum();
    
    // Explicit call
    point c2 =point(8,9);
    c2.printNum();

    return 0;
}