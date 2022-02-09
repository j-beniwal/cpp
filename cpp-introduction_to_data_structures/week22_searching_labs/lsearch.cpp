// Given an integer and an array of integers, write a function 
// named linear_search that returns the number of comparisons 
// performed doing a linear search. The function should take 3 arguments: 

// The number searched for
// The array of integers
// The number of elements in the array
// If the number searched for is not in the array then the function should
// return the maximum number of searches to determine the element is not in the array.

// Here is an example call to the function
// int lst[] = {19, 2, 20, 1, 0, 18};

// printf(“%i”,linear_search(20, lst, 6));
// The above code would print 3.

// Function Signature
// int linear_search(int search_value, int lst[], int elements);

// File Name 
// lsearch.cpp

// Score
// There are three tests each worth 2 points

// Note: You do not need to submit any other code including
// the main method or any print statements. ONLY the linear_search 
// function is required. Otherwise, the autograder will fail and be
// unable to grade your code. (I.e., do not include the above
// example in your code.) The above example should be used to
// test your code but deleted or commented out upon submission.

#include <iostream>
using namespace std;

int linear_search(int search_value, int *lst, int elements);

int main(){
    int maxSearchs, elementCount,searchValue;
    cout<<"Please enter the number of elements in the array: ";
    cin>>elementCount;

    int *arr = new int[elementCount];

    cout<<"Please enter the array elements: ";
    for(int i=0; i < elementCount; i++){
        cin>>arr[i];
    }

    cout<<"Please enter the element you want to search ";
    cin>>searchValue;

    maxSearchs = linear_search(searchValue, arr, elementCount);

    cout<<"Maximum num of searches performed is "<<maxSearchs<<endl;

    delete [] arr;
    arr = NULL;

    return 0;
}

int linear_search(int search_value, int *lst, int elements){
    int i;
    for(i = 0; i<elements; i++){
        if (search_value == lst[i])
            return i+1;
    }
    return i;

}
