// determine
// lower case letter
// uper case letter
// digit
// non alpha-numeric character

#include <iostream>
using namespace std;

int main(){
    // take the uer input
    char userInput;

    cout<<"Please enter a input. \n";
    cin>>userInput;

    if ('a' <= userInput && userInput <= 'z')
        cout<< userInput << " is a lower case letter.\n";
    else if ('A' <= userInput && userInput  <= 'Z')
        cout<< userInput << " is a upper case letter.\n";
    else if ('0' <= userInput && userInput <= '9')
        cout<< userInput << " is a number.\n";
    else 
        cout<< userInput << " is a alpha-numeric character";

    return 0;
}