// Description
// A theatre sells seats for shows and needs a system to keep track 
// of the seats they have sold tickets for. Define a class for a type called ShowTickets.
// The class should contain a collection field for the rows, seat numbers,
// and whether the tickets have been sold or not. Your class only needs to 
// support 10 sold tickets. Assume a ticket you have not referenced before 
// has a sold status of false. 
// Include the following member functions:
// A function to check if the ticket has been sold with this signature: 
// bool is_sold(string row, string seat);
// A function to update the ticket status to sold with this signature:  
// void sell_seat(string row, string seat);
// A function to print the row, seat number, and sold status delimited 
// by a space with this signature: string print_ticket(string row, string seat);
// An example use of your class follows:

// int main () {
//   ShowTickets myticket;
//   if(!myticket.is_sold(“AA”,”101”))
//     myticket.sell_seat (“AA”,”101”);
//   cout << myticket.print_ticket(“AA”,”101”) << endl;
//   cout << myticket.print_ticket(“AA”,”102”) << endl;
//   return 0;
// }

// The output from this sample would be:
// AA 101 sold
// AA 102 available
// File Name 
// showtickets.h
// Score
// There are three tests each worth 2 points
// Note: You do not need to submit any other code including the main method or any 
// print statements. ONLY the ShowTickets class is required. Otherwise, the 
// autograder will fail and be unable to grade your code. (I.e., do not include 
// the above example in your code.) The above example should be used to test your 
// code but deleted or commented out upon submission.


#include <iostream>
#include <string>
using namespace std;

const int MAX_TICKET = 10;
int current_ticket = 0;

class ShowTicket{
        string row;
        string seat_number;
        bool sold_status;
    public:
        ShowTicket(string new_row, string new_seat_number){
            row = new_row;
            seat_number = new_seat_number;
            sold_status = false;
        }
        bool is_sold();
        void sell_seat();
        string print_ticket(); //print row, seat number and sold status
};

bool ShowTicket::is_sold(){
    return sold_status;
}

void ShowTicket::sell_seat(){
    if(current_ticket >= 10)
        cout<<"Max count for tickets reached"<<endl;
    else{
        current_ticket += 1;
        sold_status = true;
    }
}

string ShowTicket::print_ticket(){
    // cout<<row<<" "<<seat_number<<" "<<sold_status<<endl;
    if(sold_status)
        return row+ " " + seat_number + " sold";
    else
        return row+ " " + seat_number + " available";
    // return "done";
}

int main(){
    ShowTicket myticket1("AA","101");
    ShowTicket myticket2("AA","102");
    ShowTicket myticket3("AA","103");
    ShowTicket myticket4("AA","104");
    ShowTicket myticket5("AA","105");
    ShowTicket myticket6("AA","106");
    ShowTicket myticket7("AA","107");
    ShowTicket myticket8("AA","108");
    ShowTicket myticket9("AA","109");
    ShowTicket myticket10("AA","110");
    ShowTicket myticket11("AA","111");
    ShowTicket myticket12("AA","112");

    if(!myticket1.is_sold())
        myticket1.sell_seat();
    if(!myticket2.is_sold())
        myticket2.sell_seat();
    if(!myticket3.is_sold())
        myticket3.sell_seat();
    if(!myticket4.is_sold())
        myticket4.sell_seat();
    if(!myticket5.is_sold())
        myticket5.sell_seat();
    if(!myticket6.is_sold())
        myticket6.sell_seat();
    if(!myticket7.is_sold())
        myticket7.sell_seat();
    if(!myticket8.is_sold())
        myticket8.sell_seat();
    if(!myticket9.is_sold())
        myticket9.sell_seat();
    if(!myticket10.is_sold())
        myticket10.sell_seat();
    if(!myticket11.is_sold())
        myticket11.sell_seat();
 
    cout<<myticket1.print_ticket()<<endl;
    cout<<myticket2.print_ticket()<<endl;
    cout<<myticket11.print_ticket()<<endl;
 
    return 0;
}