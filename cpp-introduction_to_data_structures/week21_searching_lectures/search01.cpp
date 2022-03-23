// The Searching Problem
// Problem:
//     implement the following function:
//     int search(int arr[], int arrSize, int val);
//     The function should *return an index* in arr, where 
//     val appears first, or -1 if val is not one of arr's elements.

//     Examples
//     If arr is an array containing: [5, 8, 12, 7, 8, 10]
//     * The Call: search (arr, 6, 8) should return 1 
//     * The call: search(arr, 6, 4) should return -1

// Runtime is T(n)

#include <iostream>
using namespace std;

int search(int *arr, int arrSize, int val);

int main(){
    int arrSize, elementFound, searchElement;
    cout<<"Please enter the number of array elements: ";
    cin>>arrSize;
    int * arr = new int[arrSize];

    cout<<"Enter the array elements: ";
    for(int i = 0; i< arrSize; i++){
        cin>>arr[i];
    }

    cout<<"Please enter element to search: ";
    cin>>searchElement;

    elementFound = search(arr, arrSize, searchElement);

    if (elementFound == -1)
        cout<<"Element not found in the array"<<endl;
    else
        cout<<"Element found at "<<elementFound<<" location."<<endl;

    delete [] arr;
    arr = NULL;

    return 0;
}

int search(int *arr, int arrSize, int val){
    for(int i = 0; i<arrSize; i++){
        if (arr[i] == val)
            return i;
    }
    return -1;
}