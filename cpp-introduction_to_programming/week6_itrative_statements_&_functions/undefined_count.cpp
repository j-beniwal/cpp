#include <iostream>
using namespace std;

int main(){
    int counter;
    float sum, userInput, average;
    bool flag;

    cout<<"Please enter the student grades saperated by spaces and -1 at the end : ";
    flag = true;
    sum = 0;
    counter = 0;
    while (flag == true){
        cin>>userInput;
        if (userInput != -1){
            sum += userInput;
            counter += 1;
        }
        else{
            flag = false;
            break;
        }
    }
    average = sum / counter;
    cout<<"The average of the class is : "<<average<<endl;
}