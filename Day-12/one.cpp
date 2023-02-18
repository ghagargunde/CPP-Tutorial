//files in c++

/*
File I/O in C++: Reading and Writing Files
These are some useful classes for working with files in C++

fstreambase
ifstream --> derived from fstreambase
ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

Using the constructor
Using the member function open() of the class
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string st = "Harry is bhai ";

    //opening files using constructor and writting
    ofstream sam("sample.txt");    
    sam<<st;


    //opening files using constructor and reading it
    string st2;

    ifstream in("sample1.txt");
    //in>>st2;     //give the first character 

    getline(in,st2);
    cout<<st2<<endl;
    getline(in,st2);
    cout<<st2;

    return 0;
}