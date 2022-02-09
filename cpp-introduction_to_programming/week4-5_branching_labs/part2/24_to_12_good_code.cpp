#include <iostream>
#include <string>
using namespace std;

int main(){
    int hour24, minute24;
    int hour12, minute12;
    char tmp;
    string period;

    // take user input
    cout<<"Please enter time in 24 hour format hh:mm \n";
    cin>>hour24>>tmp>>minute24;

    minute12 = minute24;
    if(hour24>=0 && hour24<12){
        period = "am";
        if (hour24 == 0)
            hour12 = 12;
        else
            hour12 = hour24;
    }
    else{
        period = "pm";
        if (hour24 == 12)
            hour12 = 12;
        else
            hour12 = hour24 -12;
    }
    cout<<hour24<<tmp<<minute24<<" is "<<hour12<<tmp<<minute12<<" "<<period<<endl;
    return 0;
}