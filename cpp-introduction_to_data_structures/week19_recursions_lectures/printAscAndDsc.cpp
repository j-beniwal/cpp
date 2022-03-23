// write a recursive implementation of the function to print ascending and descending. 
// function prints the numbers from start to end in the ascending order followed by the numbers in descending order back to start

#include <iostream>
using namespace std;

void printAscAndDsc(int start, int end);

int main(){
    int start, end;
    cout<<"Please enter start: ";   
    cin>>start;
    cout<<"Please enter end: ";
    cin>>end;

    printAscAndDsc(start,end);


    return 0;
}

void printAscAndDsc(int start, int end){
    if(start == end)
        cout<<start<<endl;
    else{
        cout<<start<<endl;
        printAscAndDsc(start+1, end);
        cout<<start<<endl;
    }
}