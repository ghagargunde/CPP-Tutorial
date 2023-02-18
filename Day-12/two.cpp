#include <iostream>
#include <fstream>

using namespace std;

int main(){
    //connecting our file with hout stream
    ofstream hout("test.txt");

    //creating a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter your nme : ";
    cin>>name;

    //writtng a string to the file
    hout<<"My name is "<<name;

    hout.close();    


    ifstream hin("test.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is: "<<content;

    hin.close();

    return 0;
}