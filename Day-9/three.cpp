#include <iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_num(){
            cout<<"Your roll no is "<<roll_no<<endl;
        }
};
class Test : public virtual Student{
    protected:
        float math,physic;
    public:
        void set_marks(float x, float y){
            math = x;
            physic = y;
        }
        void print_marks(){
            cout<<"Your result is here.."<<endl
            <<"math : "<<math<<endl
            <<"physic : "<<physic<<endl;
        }

};

class Sport : public virtual Student{
    protected:
        float score;
    public:
        void set_sport(float m){
            score = m;
        }
        void print_sport(){
            cout<<"Your PT score is "<<score<<endl;
        }


};

class Result : public Test,public Sport{
    private:
        float total;
    public:
        void Display(){
            total =  math + physic + score;
            print_num();
            print_marks();
            print_sport();
            cout<<"The total score is "<<total<<endl;
        }
        


};

int main(){
    Result samyak;
    samyak.set_number(67);
    samyak.set_marks(79.5,89.2);
    samyak.set_sport(45.2);
    samyak.Display();

    return 0;
}