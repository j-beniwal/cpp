#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]){

    // int year = (int)yr;
    int year = atoi(argv[1]);
    bool leap;

    if (year%4 == 0 && year%100 != 0)
        leap = true;
    else if( year%4 == 0 && year%400 == 0)
        leap = true;
    else 
        leap = false;

    if (leap)
        cout<<year<<" is a leap year. \n";
    else    
        cout<<year<<" is not a leap yar. \n";

    return 0;
}