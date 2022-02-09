#include <iostream>
using namespace std;

void countDigits(int num);
void sumDigits(int num);

int main(){
    // read a positive integer from the user. 
    int num;

    cout<<"Please enter a positive integer :";
    cin>>num;
    
    countDigits(num);
    sumDigits(num);
    
    return 0;
}

void countDigits(int num){
    int count, div;
    div = num;
    for(count=0; div != 0; count++){
        div = div/10;
    }

    cout<<num<<" contains "<<count<<" digits. \n";
}

void sumDigits(int num){
    int sum, div;
    div = num;
    sum = 0;
    do {
        sum += div%10;
        div = div/10;
    }while(div != 0);

    cout<<"Sum of digits in "<<num<<" is "<<sum<<endl; 
}