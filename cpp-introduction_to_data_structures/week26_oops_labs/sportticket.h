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
