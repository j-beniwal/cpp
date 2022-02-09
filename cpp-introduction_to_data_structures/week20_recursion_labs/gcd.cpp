// The greatest common divisor of integers x and y is the largest integer that 
// evenly divides both x and y. Write a recursive function named gcd that 
// returns the greatest common divisor of x and y. The gcd of x and y is 
// defined recursively as follows: If y is equal to 0, then gcd(x,y) is x; 
// otherwise gcd(x,y) is gcd(y,x%y) where % is remainder operator.
// Here is an example call to the function
// cout << gcd(15,5);
// This example would print the number 5.
// Function Signature
// int gcd(int a, int b);

// File Name 
// gcd.cpp
// Score
// There are three tests each worth 2 points
// Note: You do not need to submit any other code including  
// the main method or any print statements. ONLY the gcd 
// function is required. Otherwise, the autograder will 
// fail and be unable to grade your code. (I.e., do not 
// include the above example in your code.) The above 
// example should be used to test your code but deleted 
// or commented out upon submission.

#include <iostream>
using namespace std;

int gcd(int a, int b);

int main(){
    int a, b;
    cout<<"Please enter first int: ";
    cin>>a;
    cout<<"Please enter second int: ";
    cin>>b;

    cout<<"The greatest common devisor of "<<a<<" and "<<b<<" is: "<<gcd(a,b)<<endl;

    return 0;
}

int gcd(int a, int b){
    if(b ==0 )
        return a;
    else
        return gcd(b, a%b);
}