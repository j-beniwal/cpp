#include <iostream>
using namespace std;

bool isleapyear(int year);

int main(){
    //Take the input 
    int year;
    bool value;
    cout<<"Enter the year to test : ";
    cin>>year;

    value = isleapyear(year);
    cout<<"Year "<<year<<" is leap year : "<<value<<endl;

    return 0;
}

bool isleapyear(int year){
    if(year%4 == 0 && year%100 != 0)
        return true;
    else if(year%4 == 0 && year%400==0)
        return true;
    else
        return false;
}