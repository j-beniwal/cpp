#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void insert(int arr[], int insertThis, int insertAt)
{
    // Your code here
    cout<<"insert This: "<<insertThis<<" insertAt: "<<insertAt<<endl;
    int shift, tmp= arr[insertThis];
    for(shift = insertThis; shift>insertAt; shift-- )
        arr[shift] = arr[shift-1];
    arr[insertAt]= tmp;
}
//Function to sort the array using insertion sort algorithm.
void insertionSort(int arr[], int n)
{
    //code here
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            if(arr[i] < arr[j])
                insert(arr, i, j);
            // printArray(arr, n);
        }
        
    }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size){
    int i, j;
    for(j = 0; j < size; j++)
    {
        for(i = 0; i < size-1-j; i++){
            if(arr[i]>arr[i+1])
                swap(&arr[i],&arr[i+1]);
                
        }
    }
    return;
}

void merge(int arr[], int start, int mid, int end){
    int size = ( end-start)+1;
    int *tempArr = new int[size];
    int firstBegin = start;
    int firstEnd = mid;
    int secondBegin = mid+1;
    int secondEnd = end;
    int tempArrayLoc = 0;
    
    while(firstBegin <= firstEnd && secondBegin <= secondEnd){
        if(arr[firstBegin]< arr[secondBegin]){
            tempArr[tempArrayLoc] = arr[firstBegin];
            firstBegin++;
            tempArrayLoc++;
        }
        else {
            tempArr[tempArrayLoc] = arr[secondBegin];
            secondBegin++;
            tempArrayLoc++;
        }
    }
    while(firstBegin <= firstEnd){
        tempArr[tempArrayLoc] = arr[firstBegin];
        tempArrayLoc++;
        firstBegin++;
    }
    while(secondBegin <= secondEnd){
        tempArr[tempArrayLoc] = arr[secondBegin];
        tempArrayLoc++;
        secondBegin++;
    }
    for(int i = 0; i < size; i++){
        arr[start] = tempArr[i];
        start++;
    }
    delete [] tempArr;
}

void mergeSort(int arr[], int start, int end){
    if(start == end)
        return;
    int mid = (start+end)/2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
}

int partion(int arr[], int start, int end){
    int icurrent;
    int ipiviot=0;
    for(int i = 0; i < end; i++){
        if(arr[i]<arr[end]){
            swap(&arr[i], &arr[ipiviot]);
            ipiviot++;
        }
    }
    swap(&arr[end],&arr[ipiviot]);
    return ipiviot;

}

void quickSort(int arr[], int start, int end){
    int pIndex;
    if(start<end){
        pIndex = partion(arr, start, end);
        quickSort(arr, start, pIndex-1);
        quickSort(arr, pIndex+1, end);
    }
    else    
        return;
}


int main(){
    int arr[6] = {3, 5, 2, 7, 9, 4};

    printArray(arr, 6);

    // bubbleSort(arr, 6);
    // insertionSort(arr, 6);
    // mergeSort(arr, 0, 5);
    quickSort(arr, 0, 6);
    printArray(arr, 6);

    return 0;
}