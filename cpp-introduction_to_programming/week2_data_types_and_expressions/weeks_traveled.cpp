#include <iostream>
using namespace std;
const int DAYS_IN_A_WEEK = 7;
int main(int argc, char* argv[]){
    // input the number of days travelled
    int days_travelled;
    int weeks;
    int days;

    // if (argc > 1){
    //     cout<<"you given the value for days is : "<<argv[1]<<endl;
    //     days_travelled = int(argv[1]);
    // }
    // else { 
        cout<<"Input the number of days you travelled"<<endl;
        cin>>days_travelled;
    // }

    weeks = days_travelled / DAYS_IN_A_WEEK;
    days = days_travelled % DAYS_IN_A_WEEK;

    cout<<"You travelled "<<weeks<<" weeks and "<<days<<" days"<<endl;

    return 0;
}