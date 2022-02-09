#include <iostream>
using namespace std;

int main (){
    int quarters, dimes, nickeles, pennies, cents, dollers, remaining_cents;
    cout<<"Enter the number of quarters.\n";    // 25 cent
    cin>>quarters;
    cout<<"Enter the number of dims.\n";        // 10 cent
    cin>>dimes;
    cout<<"Enter the number of nickeles.\n";    // 5 cent
    cin>>nickeles;
    cout<<"Enter the number of pennies.\n";     // 1 cent
    cin>>pennies;

    // 1 $ = 100 cents

    // calculate the totel cents
    cents = (quarters*25) + (dimes*10) + (nickeles*5) + pennies;

    dollers = cents/100;
    remaining_cents = cents%100;

    cout<<"You have "<<dollers<<" dollers and "<<remaining_cents<<" cents.\n";

    return 0;
    
} // namespace std;
