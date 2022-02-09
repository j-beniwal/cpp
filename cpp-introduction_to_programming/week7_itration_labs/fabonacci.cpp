#include <iostream>
using namespace std;

int main(){
    int i,digitCount;
    int lastNumber, currentNumber, nextNumber;
    // take the user input
    cout<<"Please enter a positive integer grater than 1 : ";
    cin>>digitCount;

    lastNumber = 1;
    currentNumber = 1;
    cout<<lastNumber<<" "<<currentNumber<<" ";
    for(i=2;i<digitCount;i++){
        nextNumber = currentNumber + lastNumber;
        cout<<nextNumber<<" ";

        lastNumber = currentNumber;
        currentNumber = nextNumber;
    }
    cout<<endl;
    return 0;
}