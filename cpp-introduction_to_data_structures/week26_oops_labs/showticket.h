// Description
// A theatre sells seats for shows and needs a system to keep track of 
// the seats they have sold tickets for. Define a class for a type called ShowTicket.
// The class should contain fields for the row, seat number, and whether the ticket 
// has been sold or not. Define a constructor which accepts as arguments the row 
// and seat number and sets the sold status to false in the
// constructor initialization section. 

// Include the following member functions:
// A function to check if the ticket has been sold with this signature: bool is_sold();
// A function to update the ticket status to sold with this signature:  void sell_seat();
// A function to print the row, seat number, and sold status delimited by a space with 
// this signature: string print_ticket();
// An example use of your class follows:

// int main () {
//   ShowTicket myticket1(“AA”,”101”);
//   ShowTicket myticket2(“AA”,”102”);
//   if(!myticket1.is_sold())
//     myticket1.sell_seat ();
//   cout << myticket1.print_ticket() << endl;
//   cout << myticket2.print_ticket() << endl;
//   return 0;
// }

// The output from this sample would be:
// AA 101 sold
// AA 102 available

// File Name 
// showticket.h

// Score
// There are three tests each worth 2 points
// Note: You do not need to submit any other code including the main method or any 
// print statements. ONLY the ShowTicket class is required. Otherwise, the 
// autograder will fail and be unable to grade your code. (I.e., do not include 
// the above example in your code.) The above example should be used to test your 
// code but deleted or commented out upon submission.

#include <iostream>
#include <string>
using namespace std;

class ShowTicket{
    protected:
        string row;
        string seat_number;
        bool sold_status;
    public:
        ShowTicket(){
            row = " ";
            seat_number = " ";
            sold_status = false;
        }
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
    sold_status = true;
}

string ShowTicket::print_ticket(){
    // cout<<row<<" "<<seat_number<<" "<<sold_status<<endl;
    if(sold_status)
        return row+ " " + seat_number + " sold";
    else
        return row+ " " + seat_number + " available";
    // return "done";
}

// int main(){
//     ShowTicket myticket1("AA",101);
//     ShowTicket myticket2("AA",102);
//     if(!myticket1.is_sold())
//         myticket1.sell_seat();
//     cout<<myticket1.print_ticket()<<endl;
//     cout<<myticket2.print_ticket()<<endl;
//     return 0;
// }