#include <iostream>
using namespace std;

int main(){
    // take the input from the user
    int input_value, absolute_value;
    cout<<"Enter a value: \n";
    cin>>input_value;
    if (input_value < 0) {
        absolute_value = input_value*(-1);
    }
    else{
        absolute_value = input_value;
    }

    cout<<"| "<<input_value<<" |" <<" = "<< absolute_value<<endl;

    return 0;
    
} // namespace std;
