#include <iostream>
using namespace std;

template <class T>
void bubbleSort(T arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = n-1; j > i; j --){
            if(arr[j]<arr[j-1])
                swap(arr[j],arr[j-1]);
        }
    }
}

template <class T>
void swap(T &a, T &b){
    T temp; 
    temp = *a;
    *a = *b;
    *b = temp;
}

template <class T>
void printArray(T arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[16] = {4, 2, 9, 1, 3, 10, 23, 1, 32, 2, 12, 123, 3, 53, 12, 5};
    printArray(arr, 16);
    bubbleSort<int>(arr, 16);
    printArray(arr, 16);
    return 0;
}