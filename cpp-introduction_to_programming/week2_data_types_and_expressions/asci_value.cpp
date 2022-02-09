// read a char from the user and print the asci value of that character. 

#include <iostream>
using namespace std;

int main(){
    // take a character from the user.
    char a;
    int asciVal;
    cout<<"Enter a character : "<<endl;
    cin>>a;
    asciVal = (int)a;
    cout<<asciVal<<endl;
    return 0;
}