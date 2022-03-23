// Problem:

// Implement the following function:
// int sortedSearch(int srtArr[], int srtArrSize, int val);

// This function is given a sorted array srtArr, 
// its size, and val to serch for. 

// It should return an index, where val appears, or -1 if val is not
// one of srt Arr's elements. 

// Example
// If srtArr is an array containing: [5, 7, 8, 8, 10, 12]


// Runtime for sorted search: 
// itration numb            size of searching range
// 1                        n = n/2^0
// 2                        n/2 = n/2^1
// 3                        n/4 = n/2^2
// 4                        n/8 = n/2^3
// ..
// k                        n/2^(k-1)
// ..
// last iteration           1       // last element found or breaking conditin reached.

// For finkding the last itration we equate
// n/2^(k-1) = 1 
// gives T(n) = Theta(log2(n))
 
#include <iostream>
using namespace std;

int sortedSearch(int * srtArr, int srtArrSize, int val);

int main(){
    int val, elements, returnResult;
    cout<<"Enter number of sorted array elements: ";
    cin>>elements;
    int * strArr = new int[elements];

    cout<<"Enter the array elements: ";
    for(int i = 0; i < elements; i++){
        cin>>strArr[i];
    }

    cout<<"Enter the element to search: ";
    cin>>val;

    returnResult = sortedSearch(strArr, elements, val);

    if(returnResult == -1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element found at "<<returnResult<<" location"<<endl;

    delete [] strArr;
    strArr = NULL;
    return 0;
}
 int sortedSearch(int * srtArr, int srtArrSize, int val){
     int low, high, mid;
     low = 0;
     high = srtArrSize-1;
     bool found = false;

     while(found == false  && low <= high){ // we can use this as well.low != high
         mid = (low + high)/2;
         if(val == srtArr[mid])
            found = true;
        else if( val < srtArr[mid]){
            high = mid-1;
        }
        else // val is grater than the srtArr[mid]
            low = mid +1;
     }
     if (found)
        return mid;
    else
        return -1;

 }