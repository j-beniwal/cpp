// Problem : 
// * Write a recursive implementation of the function 
//     void printAsc(int start, int end);
//     The function print the numbers from start to end in the ascending order. 
//     Assuming that start<end. 

// Solving the problem
// Step 1. The Base case : solve the problem for smallest possible input. 
// Define what is input's size. 
// The input's size of: printAsc(3, 6)  => n = 4 
//                      printAsc(7, 9)  => n = 3
//                      printAsc(5, 5)  => n = 1
// n = (number of integers in the range from start to end)

// solve the problem for the smallest input. 
// identify the smallest input
// write the solution when you get the smallest input. 

// Step 2. The recursive step
//      Define the inductive Hypothesis
//      If we call pringAsc(...) on a smaller range, 
//      it will print that number in that range in the ascending order
//  Based on the inductive hypothesis, implement a solution for a given input. 
//      we do this in else part

#include <iostream>
using namespace std;

// void printAsc(int start, int end){
//     if(start == end)
//         cout<<start<<endl;       // base case for the recursion. The recursion true for the smallest value. 
//     else {
//         printAsc(start, end-1); // call the function on smaller input: here call the function to print number in ascending order from start to end-1
//         cout<<end<<endl;        // print the remaing number that is the end which is left after printing start to end-1;
//                                 // both prints the whole range from start to end. 
//     }
// }

// void printAsc(int start, int end){
//     if(start == end)
//         cout<<end<<endl;
//     else{
//         cout<<start<<endl;
//         printAsc(start+1, end);
//     }

void printAsc(int start, int end){
    int mid;
    if (start == end)
        cout<<start<<endl;
    else{
        mid = (start + end)/2;
        printAsc(start, mid);
        printAsc(mid+1, end);
    }
}

int main(){
    int start, end;
    cout<<"Please enter start number : ";
    cin>>start;
    cout<<"Please enter end number : ";
    cin>>end;

    printAsc(start, end);

    return 0;
}
    
// Tracking printAsc
