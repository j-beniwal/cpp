#include <iostream>
using namespace std;

int main(){
    int i, counter;
    float inputNum, sum, average;
    cout<<"Please enter the number of degitis : ";
    cin>>counter;

    cout<<"Please enter the numbers. ";
    for(i=0; i<counter; i++){
        cin>>inputNum;
        sum += inputNum;
    }

    average = sum/counter;
    cout<<"The average of the digits is : "<<average<<endl;

    return 0;
}