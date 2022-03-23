#include <iostream>
using namespace std;

int main(){
    int val = 0;
    // val is assigned a value 0 
    // now val is evaluated here as a boolean
    // by the concept of boolean any value except 0 in val will be taken as True
    // here val contains 0
    // so this is evaluated as False. 
    // hance the else part is executed.
    if (val = 0)
        cout<<"val is 0"<<endl;
    else
        cout<<"val is not 0"<<endl;
}