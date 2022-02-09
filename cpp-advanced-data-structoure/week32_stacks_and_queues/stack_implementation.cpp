#include <iostream>
using namespace std;
#include "./stack.cpp"


int main(){

    Stack<int> mystack;

    mystack.push(4);
    mystack.push(10);

    cout<<"size is: "<<mystack.size()<<endl;
    return 0;
}