// The merge sort algorithm uses a function to merge two subarrays 
// into one sorted array. In this lab you are writing the merge 
// function. The function should take four parameters:
// Array
// Starting Index of first subarray
// Ending Index of first subarray
// Ending Index of second subarray
// Here is an example call to the function
// int lst[] = {0, 2, 1, 18, 20};
// merge(lst,0,1,4);
// After the above code executes the array would look like this:.
// {0, 1, 2, 18, 20};
// Function Signature
// void merge(int arr[], int left, int middle, int right)
// File Name 
// merge.cpp
// Score
// There are three tests each worth 2 points
// Note: You do not need to submit any other code including the 
// main method or any print statements. ONLY the merge function is 
// required. Otherwise, the autograder will fail and be unable to 
// grade your code. (I.e., do not include the above example in your code.) 
// The above example should be used to test your code but deleted or commented out upon submission.

#include <iostream>
using namespace std; 

void merge(int arr[], int left, int middle, int right);

int main(){
    int lst[] = {0, 29, 5};
    merge(lst,0,1,2);
    cout<<"mearged list: ";
    for(int i = 0; i < 3 ; i++)
        cout<<lst[i]<<" ";
    cout<<endl;
    return 0;
}

void merge(int arr[], int left, int middle, int right){
    int * lst = new int[right - left +1];
    int iLeft, iRight, iRes;
    iLeft = left;
    iRight = middle+1;
    iRes = 0;
    while(iLeft <= middle && iRight <= right){
        if(arr[iLeft] < arr[iRight]){
            lst[iRes] = arr[iLeft];
            iRes++;
            iLeft++;
        }
        else{
            lst[iRes] = arr[iRight];
            iRes++;
            iRight++;
        }
    }

    while (iLeft <= middle)
    {
        lst[iRes] = arr[iLeft];
        iLeft++;
        iRes++;
    }

    while (iRight <= right)
    {
        lst[iRes] = arr[iRight];
        iRight++;
        iRes++;
    }
    
    for(int i = 0, j = left; i <= right; i++, j++){
        arr[j] = lst[i];
    }
    
    return;
}
