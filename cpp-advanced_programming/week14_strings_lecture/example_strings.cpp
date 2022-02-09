#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "abc";
    string name;
    cout<<str+"def"<<endl;

    cout<<"Please enter your name : .\n";
    //cin>>name; // example user enters donald duck :> only donald is accepted

    // for reading the entire line we use getline
    getline(cin, name);
    cout<<"Hello "<<name<<"!"<<endl;

    // scatter the name : string indexing
    cout<<name[0]<<" "<<name[1]<<" "<<name[2]<<" "<<name[3]<<" "<<name[4]<<" "<<name[5]<<endl;

    // demostrate slicing : it s a method 
    cout<<"Slice : "<<name.substr(4,5)<<endl;

    return 0;

}