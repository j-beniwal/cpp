#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "hiiii jeevanbejeevniwal";

    // if(str.find("jeev") == string::npos)
    //     cout<<"String not found"<<endl;
    // else
    //     cout<<"String found"<<endl;
    //     cout<<str.find("jeev")<<endl;
    // cout<<str.find("kite")<<endl;

    // find the string again if it occures morethan once. 
    if(str.find("jeev",3) == string::npos)
        cout<<"String not found"<<endl;
    else
        cout<<"String found"<<endl;
        cout<<str.find("jeev",str.find("jeev")+1)<<endl;
    // cout<<str.find("kite")<<endl;

    return 0;
}