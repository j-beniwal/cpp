// In the C programming language there is no pass-by-reference syntax to pass a 
// variable by reference to a function. Instead a variable is passed by pointer 
// (just to be confusing, sometimes passing by pointer is referred to as pass-by-reference). 
// This Practice Program asks you to do the same thing as C, which in practice 
// would be simpler to implement using C++’s reference parameter syntax. Here 
// is the header for a function that takes as

// input a pointer to an integer:
// Function Signature
// void addOne(int *ptrNum)

// Complete the function so it adds one to the integer referenced by ptrNum.
// Write a main function where an integer variable is defined, give it an initial
// value, call addOne, and output the variable. It should be incremented by 1

// File Name 
// addone.cpp
// Score
// There are three tests each worth 2 points
// Note: You do not need to submit any other code including  the main method or any print statements. ONLY the addOne function is required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.

#include <iostream>
#include <string>
using namespace std;

void addOne(int *ptrNum);

int main(){
    int x;
    int *ptr;
    ptr = &x;
    cout<<"Please enter a integer: ";
    cin>>x;
    addOne(ptr);
    cout<<"Number after addOne: "<<x<<endl;

    return 0;
}

void addOne(int *ptrNum){
    cout<<"Current value: "<<*ptrNum<<endl;
    *ptrNum += 1;
    cout<<"After increment: "<<*ptrNum<<endl;
}