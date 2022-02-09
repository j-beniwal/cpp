#include <iostream>
using namespace std;

const double POUND_TO_KG = 0.453592;
const double INCH_TO_M = 0.0254;
int main(){
    //input the weight and hight
    float weight, height, bmi;

    cout<<"Enter your body weight in pounds : \n";
    cin>>weight;
    cout<<"Enter your height in inchs : \n";
    cin>>height;

    bmi = (weight*POUND_TO_KG)/(height*INCH_TO_M*height*INCH_TO_M);

    cout<<"Your BMI is : "<<bmi<<endl;

    return 0;
}