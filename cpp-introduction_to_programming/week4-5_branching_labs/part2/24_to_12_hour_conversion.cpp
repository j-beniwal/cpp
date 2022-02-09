// convert the 24 hours input to a 12 hour input. 
#include <iostream>
using namespace std;

int main(){
    int hour24format, minute24format, hour12format;
    char tmp;
    // cout<<"Please enter hour in 24 hour format. \n";
    // cin>>hour24format;
    // cout<<"Please enter the minute in 24 hour format. \n";
    // cin>>minute24format;
    cout<<"Please enter the input in 24 hour format \n";
    cin>>hour24format>>tmp>>minute24format;

    if (hour24format==0){
        hour12format = 12;
        cout<<"Time in 12 hour format is "<< hour12format<<":"<<minute24format<<" am \n";
    }
    else if (0<hour24format && hour24format<12){
        hour12format = hour24format;
        cout<<"Time in 12 hour format is "<<hour12format<<":"<<minute24format<<" am \n";
    }
    else if (12 == hour24format ){
        hour12format = hour24format;
        cout<<"Time in 12 hour format is "<<hour12format<<":"<<minute24format<<" pm \n";
    }
    else if (hour24format>12 && hour24format<24) {
        hour12format = hour24format - 12;
        cout<<"Time in 12 hour format is "<<hour12format<<":"<<minute24format<<" pm \n";
    }
    else {
        cout<<"Please enter time in correct format \n";
    }

    return 0;
}