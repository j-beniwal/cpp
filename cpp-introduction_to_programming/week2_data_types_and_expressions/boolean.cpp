#include <iostream>
using namespace std;

int main(){
    bool b1, b2;
    b1 = true;
    b2 = !b1;

    cout<<"AND operator results "<< (b1 && b2)<<endl;
    cout<<"OR operator results "<< (b1 || b2)<<endl;

    cout<< "Mix operator results "<< (b1 && ( !b2  || true))<<endl;



    return 0;
}