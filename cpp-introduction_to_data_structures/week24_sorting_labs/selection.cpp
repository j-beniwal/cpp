// Write the selection sort algorithm using 
// the swap function developed in the previous problem. 
// You should not upload the swap function but you must call 
// the swap function to receive credit for the problem. You 
// should include a header file named cpluspluslabs.h that 
// has the signature of the swap function.
// Here is an example call to the function
// int lst[] = {19, 2, 20, 1, 0, 18};
// selection_sort(lst,6);
// After the above code executes the array would look like this:.
// {0,1, 2, 18, 19, 20}
// Function Signature
// void selection_sort(int arr[], int elements);
// File Name 
// selection.cpp
// Score
// There are three tests each worth 2 points
// Note: You do not need to submit any other code including 
// the main method or any print statements. ONLY the selection_sort 
// function is required. Otherwise, the autograder will fail and be 
// unable to grade your code. (I.e., do not include the above example 
// in your code.) The above example should be used to test your code 
// but deleted or commented out upon submission.

#include <iostream>
using namespace std;

void swap(int * val1, int * val2);
void printArray(int*lst, int size);
void selection_sort(int * lst, int size);

int main(){
    int size;
    cout<<"Please enter the array size: ";
    cin>>size;

    int *lst = new int[size];
    cout<<"Please enter the array elements: ";
    for(int i = 0; i < size; i++)
        cin>>lst[i];
    cout<<"Array before sorting: ";
    printArray(lst, size);
    selection_sort(lst, size);
    cout<<"Array after sorting: ";
    printArray(lst, size);

    delete [] lst;
    lst = NULL;

    return 0;
}

void printArray(int*lst, int size){
    for(int i = 0; i < size; i++){
        cout<<lst[i]<<" ";
    }
    cout<<endl;

    return;
}
void selection_sort(int * lst, int size){
    int i, j;
    int iMin;
    for(i = 0; i < size; i++){
        iMin = i;
        for(j = i+1; j < size; j++){
            if(lst[j]<lst[iMin])
                iMin = j;
            else
                continue;
        }
        if(iMin != i)
            swap(&lst[i], &lst[iMin]);
        else
            continue;
    }
    return;
}

void swap(int * val1, int * val2){
    int tamp;
    tamp = *val1;
    *val1 = *val2;
    *val2 = tamp;
    return;
}