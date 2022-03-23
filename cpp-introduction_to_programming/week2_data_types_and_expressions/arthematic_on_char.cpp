// perform arhtematic operations on the asic characters

#include <iostream>
using namespace std;

int main(){
    char ch1;
    char ch = 'a';
    ch1 = ch + 1;
    cout<< ch + 1<<endl;      // this will give 98 as output as the final value remains as int 
                        //(character cascaded to int) cascading without loosing value. 
    cout<<(char)(ch + 1)<<endl;
    cout<< ch1 <<endl;  // this will give a character as output. 
    return 0;
}