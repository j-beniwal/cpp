#include <iostream>
using namespace std;

int main(){
    // take four input from the user 
    int numA, numB, numC, numD;
    int numOdd, numEven;
    cout<<"Please enter four numbers saperated by spaces. \n";
    cin>>numA>>numB>>numC>>numD;

    numEven = 0;
    numOdd = 0;

    if (numA%2 == 0)
        numEven += 1;
    else    
        numOdd += 1;

    if (numB%2 ==0)
        numEven += 1;
    else
        numOdd += 1;

    if (numC%2 ==0)
        numEven += 1;
    else
        numOdd += 1;

    if (numD%2 ==0)
        numEven += 1;
    else
        numOdd += 1;

    if (numEven>numOdd)
        cout<<"More Even numbers \n";
    else if (numEven<numOdd)
        cout<<"More Odd numbers \n";
    else if(numEven == numOdd)
        cout<<"Equel Odd and Even numbers \n";
    else
        cout<<"Error occured";

    return 0;
}