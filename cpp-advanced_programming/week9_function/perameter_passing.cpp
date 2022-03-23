#include <iostream>
using namespace std;

void swap_pass_by_value(int a , int b);
void swap_pass_by_reference(int &a, int &b);

int main(){
    int a = 3, b = 4;
    cout<<"Before: a = "<<a<<" b = "<<b<<endl;
    swap_pass_by_value(a ,b);
    cout<<"After pass by value: a = "<<a<<" b = "<<b<<endl;
    swap_pass_by_reference(a, b);
    cout<<"After pass by reference: a = "<<a<<" b = "<<b<<endl;

    return 0;
}

void swap_pass_by_value(int a, int b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void swap_pass_by_reference(int &a, int &b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}