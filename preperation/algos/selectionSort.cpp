#include <iostream>
using namespace std;

void selectionSort(int arr[], int size);

int findMin(int arr[], int start, int end){
    int minIndex = start;
    for(int i = start; i < end; i ++){
        if (arr[i] < arr[minIndex])
            minIndex = i;
    }
    return minIndex;
}

void swap(int *a, int *b){
    int * tmp = new int;
    *tmp = *a;
    *a = *b;
    *b = *tmp;
    delete tmp;
    return;
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    int arr[5] = {5, 3, 9, 1, 7};
    cout<<"array before sort: ";
    printArray(arr, 5);
    
    selectionSort(arr, 5);
    cout<<"array after sort: ";
    printArray(arr,5);

    return 0;
}

void selectionSort(int arr[], int size){
    int i, minIndex;
    for(i = 0; i < size-1; i++){
        printArray(arr, size);
        minIndex = findMin(arr, i, size);
        swap(&arr[minIndex], &arr[i]);
    }
    return;
}