#include <iostream>
using namespace std;

double bmimetricf(double height, double weight);

int main(){
    double height;
    double weight, bmi;
    //take the user input

    cout<<"Please enter height in m : ";
    cin>>height;
    cout<<"Please enter your weight in kg : ";
    cin>>weight;

    bmi = bmimetricf(height, weight);

    cout.precision(4);
    if (bmi<18.5)
        cout<<"BMI is: "<<bmi<<", Status Uderweight."<<endl;
    else if (18.5 <= bmi <= 24.9)
        cout<<"BMI is: "<<bmi<<", Status Normal."<<endl;
    else if (25.0 <= bmi <= 29.9)
        cout<<"BMI is: "<<bmi<<", Status Overweight."<<endl;
    else if (30.0 <= bmi)
        cout<<"BMI is: "<<bmi<<", Status Obese."<<endl;
    else
        cout<<"Error calculating BMI";
    //cout<<"Your bmi is : "<<bmi<<endl;
    return 0;
}

double bmimetricf(double height, double weight){
    float bmi;
    bmi = weight/(height*height);
    return bmi;
}