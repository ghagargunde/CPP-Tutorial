#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){

    map <string ,int> marksMap;
    marksMap["harry"]=98;
    marksMap["sam"]=8;
    marksMap["rahul"]=8;
    marksMap["deva"]=48;

    marksMap.insert({{"om",55},{"au",47}});
     cout<< marksMap.size()<<endl;

    map<string,int> :: iterator iter;

    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    
    return 0;
}