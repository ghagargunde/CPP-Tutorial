//Break and continue

#include <iostream>

using namespace std;

int main(){
    
    //Break keyword
    cout <<"Using Break keyword"<<endl;
    for(int i = 0;i<4;i++){
        cout <<i <<endl;
        if(i==2){
            break;
        }
    }
    //continue keyword
    cout <<"Using continue keyword"<<endl;
    for(int i = 0;i<4;i++){
        cout <<i <<endl;
        if(i==2){
            continue;;
        }
    }
    return 0;
}