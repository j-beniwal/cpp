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
    cout<<"Your bmi is : "<<bmi<<endl;
    return 0;
}

double bmimetricf(double height, double weight){
    float bmi;
    bmi = weight/(height*height);
    return bmi;
}