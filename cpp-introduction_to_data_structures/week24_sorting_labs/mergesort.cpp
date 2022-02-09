// Write the merge sort algorithm using the merge function developed 
// in the previous problem. You should not upload the merge function 
// but you must call the merge function to receive credit for the 
// problem. You should include a header file named cpluspluslabs.h 
// that has the signature of the merge function. The merge sort 
// function should take three parameters
// Array to sort
// Left Index to start of data
// Right Index to end of data
// Here is an example call to the function
// int lst[] = {19, 2, 20, 1, 0, 18};
// merge_sort(lst,0,5);
// After the above code executes the array would look like this:.
// {0,1, 2, 18, 19, 20}
// Function Signature
// void merge_sort(int arr[], int left, int right)
// File Name 
// mergesort.cpp
// Score
// There are five tests each worth 2 points
// Note: You do not need to submit any other code including the main method or any 
// print statements. ONLY the merge_sort function is required. Otherwise, the 
// autograder will fail and be unable to grade your code. (I.e., do not include 
// the above example in your code.) The above example should be used to test your 
// code but deleted or commented out upon submission.

#include <iostream>
using namespace std; 

void merge(int arr[], int left, int middle, int right);
void merge_sort(int arr[], int left, int right);
void printArray(int lst[], int size);

int main(){
    int lst[] = {19, 2, 20, 1, 0, 8, 11, 6, 11, 5, 3, 22};
    cout<<"Array before sorting: ";
    printArray(lst, 12);
    merge_sort(lst,0,11);
    cout<<"Array after sorting: ";
    printArray(lst, 12);
    return 0;
}

void merge_sort(int arr[], int left, int right){
    int mid;
    mid = (left + right)/2;
    if (left == right){
        // cout<<left<<endl;
        return;
    }
    else{
        merge_sort(arr, left, mid);
        merge_sort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
    return;
}

void printArray(int lst[], int size){
    for(int i = 0; i < size; i++)
        cout<<lst[i]<<" ";
    cout<<endl;
}

void merge(int arr[], int left, int middle, int right){
    int size = right - left+1;
    int * lst = new int[size];
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
    
    for(int i = 0, j = left; i < size; i++, j++){
        arr[j] = lst[i];
        //cout<<lst[i]<<" ";
    }
    // printArray(arr, 12);
    // cout<<"sucesfully mearged array: ";
    // for(int i = 0; i <= iRes; i++ )
    //     cout<<lst[iRes]<<" ";
    //cout<<endl;

    return;
}