#include <iostream>
using namespace std;

int main(){
    int n;
    int counter;
    cout<<"Please enter a positive integer : ";
    cin>>n;

    counter = 1;
    while(counter <= n){
        cout<<counter<<endl;
        counter++;
    }

    return 0;
}