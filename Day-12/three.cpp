#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
//open()-- >open the file
    ofstream out;
    out.open("sample.txt");


    //writting to the file

    out<<"This is me\n";
    out<<"This is also me";

    out.close();


//eof() -->end of file
    ifstream in;

    string st;
    in.open("sample.txt");

    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }
    return 0;
}