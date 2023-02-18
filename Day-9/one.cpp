//multiple inheritance

#include <iostream>
using namespace std;

class Base1{
    protected:
        int a;
    public:
        void set_base1(int x){
            a = x;
        }
};
class Base2{
    protected:
        int a1;
    public:
        void set_base2(int x1){
            a1 = x1;
        }
};
class Base3{
    protected:
        int a2;
    public:
        void set_base3(int x2){
            a2 = x2;
        }
};
//multiple inheritance
class Derive : public Base1,public Base2,public Base3{
    public:
        void show(){
            cout<<"The value of base1 is "<<a<<endl;
            cout<<"The value of base2 is "<<a1<<endl;
            cout<<"The value of base3 is "<<a2<<endl;
            cout<<"The sum of base1 + base2 + base3 is "<<(a+a1+a2)<<endl;
        }
};
int main(){
    Derive samyak;
    samyak.set_base1(45);
    samyak.set_base2(55);
    samyak.set_base3(64);
    samyak.show();
    return 0;
}