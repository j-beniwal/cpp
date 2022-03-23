#include <iostream>
using namespace std;

int factorial(int n);

int main(){
    int userInput, factorialResult;
    cout<<"Please enter the number for factorial: ";
    cin>>userInput;
    factorialResult = factorial(userInput);
    cout<<"Factorial of "<<userInput<<" is "<<factorialResult<<endl;
    return 0;
}

int factorial(int n){
    if (n ==1 )
        return 1;
    else
        return n*factorial(n-1);
}