// Read from the user a string containing 
// odd number of characters. Your program should: 
// a) Print the middle character. 
// b) Print the string up to but not including the middle character (i.e., the first half 
// of the string). 
// c) Print the string from the middle character to the end (not including the 
// middle character). 

// Sample output: 
// Enter an odd length string: Fortune favors the bold
// Middle character: o
// First half: Fortune fav
// Second half: rs the bold
// File Name 
// stringsplitter.cpp
// Score
// There are five tests each worth 2 points

#include <iostream>
#include <string>
using namespace std;

int main(){
    string userString, firstHalf, secondHalf;
    char mid;
    do {
        cout<<"Enter an odd length string: "; 
        getline(cin, userString);
    } while (userString.length()%2 == 0);

    mid = userString[(userString.length()-1)/2];
    cout<<"Middle character: "<<mid<<endl;
     
    firstHalf = userString.substr(0,(userString.length()-1)/2);
    cout<<"First half: "<<firstHalf<<endl;

    secondHalf = userString.substr((userString.length()-1)/2+1,(userString.length()-1)/2);
    cout<<"Second half: "<<secondHalf<<endl;

    return 0;
}