#include <iostream>
using namespace std;

int main(){
    // take the input from the user
    int gradeA, gradeB;

    cout<<"Please enter your greades saperated by space : \n";
    cin>>gradeA>>gradeB;

    if (gradeA < 60 && gradeB < 60)
        cout<<"Student Failed :( \n";

    else if(gradeA >= 95 && gradeB >= 95){
        cout<<"Student Graduated with Honers :) \n";
    }
    else
        cout<<"Student Graduated \n";

    return 0; 
}