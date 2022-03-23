// The selection sort algorithm uses a function to swap 
// the position of two elements in the array. Write the 
// swap function for an integer selection sort

// Here is an example call to the function
// int lst[] = {19, 2, 20, 1, 0, 18};
// swap(&lst[0],&lst[1]);
// After the above code executes the array would look like this:.
// {2, 19, 20, 1, 0, 18}

// Function Signature
// void swap(int *xp, int *yp) ;
// File Name 
// swap.cpp

// Score
// There are three tests each worth 2 points
// Note: You do not need to submit any other 
// code including the main method or any 
// print statements. ONLY the swap function 
// is required. Otherwise, the autograder 
// will fail and be unable to grade your code.
// (I.e., do not include the above example in 
// your code.) The above example should be 
// used to test your code but deleted or 
// commented out upon submission.

#include <iostream>
using namespace std;

void swap(int * val1, int * val2);
void printArray(int lst[], int size);

int main(){
    int lst[] = {19, 2, 20, 1, 0, 18};
    cout<<"Array before swap : ";
    printArray(lst, 6);
    swap(&lst[0], &lst[1]);

    cout<<"Array After swap: ";
    printArray(lst, 6);

    return 0;
}

void printArray(int lis[], int size){
    int i = 0;
    for( i = 0; i < size; i++){
        cout<<lis[i]<<" ";
    }
    cout<<endl;
    return;
}

void swap(int * val1, int * val2){
    int tamp;
    tamp = *val1;
    *val1 = *val2;
    *val2 = tamp;
    return;
}

