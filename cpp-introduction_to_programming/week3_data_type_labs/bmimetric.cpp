#include <iostream>
using namespace std;

int main(){
    //input the weight and hight
    float weight, height, bmi;

    cout<<"Enter your body weight in kg : \n";
    cin>>weight;
    cout<<"Enter your height in meters : \n";
    cin>>height;

    bmi = weight/(height*height);

    cout<<"Your BMI is : "<<bmi<<endl;

    return 0;
}