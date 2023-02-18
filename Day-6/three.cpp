/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/


#include <iostream>
using namespace std;

//complex number
// 1 + 4i
// 5 + 8i
// -------
// 6 + 12i 

class complex{
    int a,b;

    public:

        void setNum(int x , int y){
            a = x;
            b = y;
        }

        // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)
        friend complex sumComplex(complex obj1,complex obj2);



        void printNumber(){
            cout<<"Your Num is "<<a <<" + "<<b <<"i"<<endl;
        }
};

complex sumComplex(complex obj1,complex obj2){
    complex obj3;
    obj3.setNum((obj1.a+obj2.a),(obj1.b+obj2.b))
    ;
    return obj3;
}

int main(){
    complex num1,num2,sum;
    num1.setNum(5,8);
    num1.printNumber();

    num2.setNum(6,7);
    num2.printNumber();

    sum = sumComplex(num1,num2);
    sum.printNumber();



    return 0;
}