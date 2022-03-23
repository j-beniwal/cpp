// A football club needs a system to keep track of the seats 
// they have sold tickets for. Define a class for a type called 
// SportTicket that inherits from the ShowTicket class you 
// defined earlier. You should include the showticket.h file 
// in your code but not upload the file.

// The class should add a new boolean field to store if beer 
// has been purchased at that seat. Define a constructor which 
// accepts as arguments the row and seat number and sets the 
// sold status and beer sold fields to false in the constructor 
// initialization section. 
// The showticket class has the following protected members:
// string row;
// string seat;
// Include the following new member functions:
// A function to check if the ticket has been sold with this signature:bool beer_sold();
// A function to update the beer sold status to sold with this signature:  void sell_beer();
// override the print_ticket method to add if beer has been sold or not.
// An example use of your class follows:
// int main () {
//   SportTicket myticket1(“AA”,”101”);
//   SportTicket myticket2(“AA”,”102”);
//   myticket1.sell_seat();
//   myticket2.sell_seat();
//   myticket2.sell_beer();
//   cout << myticket1.print_ticket() << endl;
//   cout << myticket2.print_ticket() << endl;
//   return 0;
// }
// The output from this sample would be:
// AA 101 sold nobeer
// AA 102 sold beer
// File Name 
// sportticket.h
// Score
// There are three tests each worth 2 points
// Note: You do not need to submit any other code including the 
// main method or any print statements. ONLY the SportTicket class 
// is required (The grader already has the ShowTicket class). 
// Otherwise, the autograder will fail and be unable to grade your 
// code. (I.e., do not include the above example in your code.) The 
// above example should be used to test your code but deleted or commented out upon submission.

// #include </Users/jeevanbeniwal/Downloads/code/c++/cpp-introduction_to_data_structures/week26/showticket copy.h>
#include </Users/jeevanbeniwal/Downloads/code/c++/cpp-introduction_to_data_structures/week26/showticket.h>
using namespace std;

class SportTicket : public ShowTicket{
        bool beer_purchased;
    public:
        SportTicket(){
            beer_purchased = false;
        }
        SportTicket(string new_row, string new_seat_number) : ShowTicket(new_row, new_seat_number){
            row = new_row;
            seat_number = new_seat_number;
            sold_status = false;
            beer_purchased = false;
        }
        bool beer_sold();
        void sell_beer();
        string print_ticket();
};

bool SportTicket::beer_sold(){
    return beer_purchased;
}

void SportTicket::sell_beer(){
    beer_purchased = true;
}

string SportTicket::print_ticket(){
    // cout<<row<<" "<<seat_number<<" "<<sold_status<<endl;
    if(sold_status && beer_purchased)
        return row+ " " + seat_number + " sold" + " beer";
    else if(!sold_status && beer_purchased)
        return row+ " " + seat_number + " available" + " beer";
     else if(!sold_status && !beer_purchased)
        return row+ " " + seat_number + " available" + " nobeer";
    else
        return row+ " " + seat_number + " sold" + " nobeer";
   // return "done";
}

int main () {
  SportTicket myticket1("AA","101");
  SportTicket myticket2("AA","102̀");
  myticket1.sell_seat();
  myticket2.sell_seat();
  myticket2.sell_beer();
  cout << myticket1.print_ticket() << endl;
  cout << myticket2.print_ticket() << endl;
  return 0;
}