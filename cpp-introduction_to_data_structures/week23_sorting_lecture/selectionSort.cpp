// execution time is T(n^2)

#include <iostream>
using namespace std;

void selectionSort(int *arr, int arrSize);
void printArray(int *arr, int arrSize);
void swap(int *arr, int index_1, int index_2);

int main(){
    int arrSize;
    cout<<"Please enter the arr size: ";
    cin>>arrSize;

    int * arr = new int[arrSize];
    cout<<"Please enter the array elements: ";
    for(int i = 0; i < arrSize; i++){
        cin>>arr[i];
    }

    cout<<"Array before sorting: ";
    printArray(arr, arrSize);

    selectionSort(arr, arrSize);
    
    cout<<"Array after sorting: ";
    printArray(arr, arrSize);
    return 0;
}
void printArray(int *arr, int arrSize){
    for(int i = 0; i < arrSize; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int *arr, int arrSize){
    int smallest_ind;
    for(int i = 0; i < arrSize; i++){
        smallest_ind = i;
        for(int j = i+1; j < arrSize; j++){
            if (arr[j]< arr[smallest_ind]){
                smallest_ind = j;
            }
            else
                continue;
        }
        if(smallest_ind == i)
            continue;
        else
            swap(arr, smallest_ind, i);
    }
    return;
}

void swap(int *arr, int index_1, int index_2){
    int tmp;
    tmp = arr[index_1];
    arr[index_1] = arr[index_2];
    arr[index_2] = tmp;
    return;
}