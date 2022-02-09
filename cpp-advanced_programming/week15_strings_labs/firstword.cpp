// Write a function that is given a phrase and returns the first word in that phrase.
// For example, given ‘the quick brown fox’, your function should return ‘the’.
// Here is an example call to the function
// cout << firstword(“the quick brown fox”);
// Function Signature
// string firstword(string s);
// File Name 
// firstword.cpp
// Score
// There are three tests each worth 2 points
// Note: You do not need to submit any other code including the main method or any print statements. ONLY the firstword function is required (leave in your includes and namespace directives). Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.

#include <iostream>
#include <string>
using namespace std;

string firstword(string s);

int main(){
    string inputPhrase, firstWordOfPhrase;
    cout<<"Please enter the phrase: ";
    getline(cin, inputPhrase);

    firstWordOfPhrase = firstword(inputPhrase);
    
    cout<<"First word of the phrase is: "<<firstWordOfPhrase<<endl;
    return 0;
}

string firstword(string s){
    int i;
    for(i = 0; i<=s.length(); i++){
        if (s[i]== ' ')
            return s.substr(0,i+1);
        else if (s[i] == '\0'){
            cout<<"only one word"<<endl;
            return s;
        }
    }
    return s;
}