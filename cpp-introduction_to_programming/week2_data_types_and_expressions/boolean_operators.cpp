#include <iostream>

using namespace std;

int main(){
    bool b;
    int x;

    b = true;
    b = true && (true && !b);
    
    x = 3;

    b = x > 0;

    b = (x >= 0) && (x <= 5);
    b = (x == 3) || (x == 5);

    return 0;
}