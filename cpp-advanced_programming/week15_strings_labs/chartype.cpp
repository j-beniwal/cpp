// Write a program that  reads a character (string of  length  1)  from  the 
// user, and classifies it to  one of the following: lower case letter, upper case letter, 
// digit,  or non-alphanumeric character 

// Sample  output (4 different executions):  
// Enter a character: j
// j is  a lower case  letter.
// Enter a character: 7
// 7 is  a digit.
// Enter a character: ^
// ^ is  a non-alphanumeric  character.
// Enter a character: C
// C is  an  upper case  letter.
// File Name 
// chartype.cpp
// Score
// There are five tests each worth 2 points

#include <iostream>
#include <string>
using namespace std;

int main(){
    char userInput;
    cout<<"Enter a character: ";
    cin>>userInput;

    if('a'<=userInput && userInput<='z')
        cout<<userInput<<" is a lower case letter."<<endl;
    else if('A'<=userInput && userInput<='Z')
        cout<<userInput<<" is a upper case letter."<<endl;
    else if('0'<=userInput && userInput<='9')
        cout<<userInput<<" is a digit."<<endl;
    else
        cout<<userInput<<" is a non-alphanumeric character."<<endl;

    return 0;

}