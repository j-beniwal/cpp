// Write a function that takes a parameter that is an integer named numDoubles. 
// Create a dynamic array that can store numDoubles doubles and make a loop that 
// fills in each array entry with the value of the element number (starting with 1) 
// divided by 3. Return the array from the function.
// A sample execution with numDoubles equal to 4 would produce the array 
// [0.3333, 0.6666, 1, 1.3333]
// Function Signature
// double* getDoubles(int numDoubles)
// File Name 
// getdoubles.cpp
// Score
// There are three tests each worth 2 points
// Note: You do not need to submit any other code including  the main method or any print statements. ONLY the getDoubles function is required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.

#include <iostream>
using namespace std;

double* getDoubles(int numDoubles);

int main(){
    int arrayLength;
    double* arr; 
    cout<<"Please enter the length of array: ";
    cin>>arrayLength;
    arr = getDoubles(arrayLength);

    cout<<"Here is the elements of the array: "<<endl;
    for(int i = 0; i < arrayLength; i++)
        cout<<arr[i]<<endl;

    cout<<"Pointer value before delete: "<<arr<<endl;
    delete arr;
    arr = NULL;
    cout<<"Pointer value after delte: "<<arr<<endl;
    return 0;
}

double* getDoubles(int numDoubles){
    double * arr = new double[numDoubles];

    for(int i = 0; i < numDoubles; i++)
        arr[i] = ((double)i+1)/3.0;

    return arr;
}