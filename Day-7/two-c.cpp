//difference b/w two point


// parameterized constructors
#include <iostream>
#include <math.h>
using namespace std;
class point
{
    int x , y;
    friend void difference(point,point);

    public:
        
        point(int a,int b){
            x=a;
            y=b;
        }


        void printCordinate(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};

void difference(point obj1,point obj2){
    float diff,x_cor,y_cor; 
    x_cor =  obj2.x - obj1.x;
    y_cor =  obj2.y - obj1.y;
    diff = sqrt((x_cor*x_cor)-(y_cor*y_cor));
    cout<<"difference b/w two point is "<<diff<<endl;
}

int main (){
    point c1(3,5),c2(7,4);
    c1.printCordinate();
    c2.printCordinate();

    difference(c1,c2);

    return 0;
}