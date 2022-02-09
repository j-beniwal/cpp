// Given an integer and a sorted array of integers, write a 
// function named binary_search that prints the number of 
// comparisons performed doing a binary search. The function 
// should take 3 arguments: 

// The number searched for
// The array of integers
// The number of elements in the array
// If the number searched for is not in the array then the 
// function should return the maximum number of searches to 
// determine the element is not in the array.

// Here is an example call to the function
// int lst[] = {0, 1, 2, 18, 19, 20, 25};
// printf(“%i”,binary_search(20, lst, 7));
// The above code would print 2.

// Function Signature
// int binary_search(int search_value, int lst[], int elements);

// File Name 
// bsearch.cpp

// Score
// There are three tests each worth 2 points
// Note: You do not need to submit any other code including the main method or any print statements. ONLY the binary_search function is required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.

#include <iostream>
using namespace std;

int binary_search(int search_value, int lst[], int elements);

int main(){
    int elements, searchValue, searchOperations;
    cout<<"Please enter the number of elements: ";
    cin>>elements;

    int *lst = new int[elements];

    cout<<"Please enter the elements: ";
    for(int i = 0; i < elements; i++){
        cin>>lst[i];
    }

    cout<<"Please enter the search Value: ";
    cin>>searchValue;

    searchOperations = binary_search(searchValue, lst, elements);

    cout<<"Number of search operations performend are: "<<searchOperations<<endl;

    delete [] lst;
    lst = NULL;

    return 0;
}

int binary_search(int search_value, int lst[], int elements){
    int start = 0;
    int end = elements-1;
    bool elementFound = false;
    int mid;
    int i = 0;

    while(!elementFound && start < end){
        i++;
        mid = (start+end)/2;
        if(lst[mid] == search_value)
            elementFound = true;
        
        else if(search_value< lst[mid])
            end = mid-1;
        else 
            start = mid+1;
        
    }
    return i;
}
