#include <iostream>
#include <string>
using namespace std;

int main(){
    string name, reverse_name;
    char tmp;
    int strlen,i;
    // take the user input
    cout<<"Please enter your name: ";
    getline(cin, name);
    strlen = name.length();
    reverse_name = name;

    for(i=strlen-1; i>=strlen/2; i-- ){
        tmp = name[strlen-1-i];
        name[strlen-1-i] = name[i];
        name[i] = tmp;
    }
    cout<<name<<endl;
    return 0;
}