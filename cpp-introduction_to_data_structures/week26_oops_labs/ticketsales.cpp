// You have been so successful in your previous object oriented programming 
// you decide to develop a computer software system to compete with Ticketmaster
// You then add a new class called TicketSales. This new class can print either 
// a ShowTicket or a SportsTicket. You should include the header file sportticket.h 
// in your header
// Include the following new member functions
// A function to print either a ShowTicket or a SportTicket with this 
// signature:string print_ticket(ShowTicket *myticket);
// An example use of your class follows:
// int main () {
//   TicketSales ts;
//   ShowTicket myticket1(“AA”,”101”);
//   SportTicket myticket2(“AA”,”102”);
//   myticket1.sell_seat();
//   myticket2.sell_seat();
//   myticket2.sell_beer();
//   cout << ts.print_ticket(&myticket1);
//   cout << ts.print_ticket(&myticket2);
//   return 0;
// }
// The output from this sample would be:
// AA 101 sold 
// AA 102 sold beer
// File Name 
// ticketsales.h
// Score
// There are three tests each worth 2 points
// Note: You do not need to submit any other code including the main method 
// or any print statements. ONLY the class TicketSales is required (The 
// grader already has the ShowTicket and SportTicket classes). Otherwise, 
// the autograder will fail and be unable to grade your code. (I.e., do not 
// include the above example in your code.) The above example should be used 
// to test your code but deleted or commented out upon submission.

// #include </Users/jeevanbeniwal/Downloads/code/c++/cpp-introduction_to_data_structures/week26/sportticket.h>
#include "./sportticket.h"

class TicketSales{

    public:
        TicketSales(){}
        string print_ticket(ShowTicket *myticket);
};

string TicketSales::print_ticket(ShowTicket *myticket){
    return myticket->print_ticket();
}

int main () {
  TicketSales ts;
  ShowTicket myticket1("AA","101");
  SportTicket myticket2("AA","102");
  myticket1.sell_seat();
  myticket2.sell_seat();
  myticket2.sell_beer();
  cout << ts.print_ticket(&myticket1)<< endl;
  cout << ts.print_ticket(&myticket2)<< endl;
  return 0;
}