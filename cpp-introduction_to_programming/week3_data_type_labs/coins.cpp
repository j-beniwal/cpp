#include <iostream>
using namespace std;

const int C_PENNY = 1;
const int C_NICKEL = 5;
const int C_DIME = 10;
const int C_QUARTER = 25;

int main(){
    //take the number of dollers and cents from user
    int quarters, dimes, nickels, pennies, input_dollers, input_cents, total_cents;
    cout<<"Enter the amount of money you have in dollers. \n";
    cin>>input_dollers;
    cout<<"Enter the left cents. \n";
    cin>>input_cents;

    total_cents = (input_dollers*100) + input_cents;

    quarters = total_cents/C_QUARTER;                       // 92/25 = 3    (17)
    dimes = (total_cents%C_QUARTER)/C_DIME;                 // (92%25)/10 = 1   (7)
    nickels = ((total_cents%C_QUARTER)%C_DIME)/C_NICKEL;    // ((92%25)%10)/5 1  (2)
    pennies = ((total_cents%C_QUARTER)%C_DIME)%C_NICKEL;

    cout<<"You have "<<quarters<<" quarters "<<dimes<<" dims "<<nickels<<" nickels "<<pennies<<" pennies.\n";

    return 0;
} // namespace std;
