#include <iostream>
using namespace std;

template <class T>

/*
class Samyak{
    public:
        T data;
        Samyak (T a){
            data = a;
        }
        void display(){
            cout <<data<<endl;
        }
};
*/

class Samyak{
    public:
        T data;
        Samyak (T a){
            data = a;
        }
        void display();
};

template <class T>
void Samyak <T> ::display(){
     cout <<data<<endl;
};


int main(){
    Samyak <char> c1('a');
    c1.display();

    return 0;
}