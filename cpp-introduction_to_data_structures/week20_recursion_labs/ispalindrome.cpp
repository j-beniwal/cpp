// A palindrome is a word, number, phrase, or other sequence of characters 
// which reads the same backward as forward, such as madam, racecar. Given 
// an integer, write a function named is_palindrome that returns true if 
// the given number is a palindrome, else false. For example, 12321 is 
// palindrome, but 1451 is not palindrome.

// Here is an example call to the function
// cout << is_palindrome(12321);
// This example would return true.
// Function Signature
// bool is_palindrome(int test);
// File Name 
// ispalindrome.cpp
// Score
// There are three tests each worth 2 points

// Note: You do not need to submit any other code including  the main method 
// or any print statements. ONLY the is_palindrome function is required. 
// Otherwise, the autograder will fail and be unable to grade your code. 
// (I.e., do not include the above example in your code.) The above example 
// should be used to test your code but deleted or commented out upon submission.

#include <iostream>
using namespace std;

void reverse(int n, int &rev);
bool is_palindrome(int test);
int reverse(int n);

int main(){
    int num;
    cout<<"Give an integer to be reversed: ";
    cin>>num;
    if(is_palindrome(num))
        cout<<"The "<<num<<" is palindrome."<<endl;
    else
        cout<<"The "<<num<<" is not palindrome."<<endl;
    return 0;
}

void reverse(int n, int &rev){
    if (n == 0)
        return;
    rev = rev*10 + (n%10);
    reverse(n/10, rev);
}
int reverse(int n){
    if (n == 0)
        return 1;
    else {
        return reverse(n/10) + (n%10)*10;
    }
    
}
bool is_palindrome(int test){
    // reverse(test, rev);
    int rev = reverse(test);
    cout<<rev<<endl;
    return (test == rev);
}

