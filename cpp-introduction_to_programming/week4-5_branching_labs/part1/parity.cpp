// reads a positive integer from the user and determines the parity
// outputs even or odd.
#include <iostream>
using namespace std;

int main(){
    // take a input from user
    int userInput;
    cout<<"Please enter a number for the parity check. \n";
    cin>>userInput;

    if (userInput%2){
        cout<<"The given number is odd. \n";
    }
    else{
        cout<<"The given number is even. \n";
    }
    return 0;
}