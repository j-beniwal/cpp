
int findIndexOfMin(int arr[], int low, int high){
    int min, minInd,i; 
    min = arr[low];
    minInd = low;
    for(i = low+1; i <= high; i++){
        if (arr[i] < min){
            min = arr[i];
            minInd = i;
        }
    }
    return minInd;
}

void swap(int a, int b);
void selectionSort ( int arr[], int arrSize){
    int i, minInd;
    for (i = 0; i < arrSize; i++){
        minInd = findIndexOfMin(arr, i , arrSize-1);
        swap(arr[i], arr[minInd]);
    }
}
