#include <iostream>
using namespace std;

int main(){
    int integerCoutn, evenNumber;
    int i;
    cout<<"Please enter the even integer count : ";
    cin>>integerCoutn;
    evenNumber=2;
    for(i=0;i<integerCoutn;i++){
        cout<<evenNumber<<endl;
        evenNumber += 2;
    }
}