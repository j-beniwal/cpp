#include <iostream>
using namespace std;

int main(){
    int inputDigit;
    int sum = 0;
    int mod;
    int div;
    // give me the integer
    cout<<"Please enter the input : ";
    cin>>inputDigit;

    mod = inputDigit;
    div = inputDigit;
    while (div !=0) {
        mod = div%10;
        div = div/10;
        sum += mod;
    } 

    cout<<"The sum of the digits of "<<inputDigit<<" is "<<sum<<endl;
    
    return 0;
}