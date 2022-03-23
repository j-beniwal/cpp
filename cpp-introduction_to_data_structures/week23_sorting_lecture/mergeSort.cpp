// runtime
// model the iteration
// recursive model
// merge in bracket()

// T(n) = n log(n) // base 2

//                         n (n)
//           n/2 (n/2)                  n/2(n/2)
// n/4(n/4)             n/4(n/4)     n/4 (n/4)       n/4(n/4)

// 1               1                   1


#include <iostream>
using namespace std;

void merge(int arr[], int lowLeft, int highLeft, int highRight){
    int lowRight = highLeft+1, size = highRight - lowLeft + 1;
    int * mergedArr = new int[size];
    int iArr, i;

    int iRight, iLeft, iRes;

    iLeft = lowLeft;
    iRight = lowRight;
    iRes = 0;

    while(iLeft <= highLeft && iRight <= highRight){
        if(arr[iLeft]<arr[iRight]){
            mergedArr[iRes] = arr[iLeft];
            iRes += 1;
            iLeft += 1;
        }
        else{
            mergedArr[iRes] = arr[iRight];
            iRight += 1;
            iRes += 1;
        }
    }

    while(iLeft <= highLeft){
        mergedArr[iRes] = arr[iLeft];
        iLeft++;
        iRes++;
    }

    while (iRight <= highRight)
    {
        mergedArr[iRes] = arr[iRight];
        iRight++;
        iRes++;
    }

    for(i = 0, iArr = lowLeft; i < size; i++, iArr++){
        arr[iArr] = mergedArr[i];
    }

    delete [] mergedArr;
    mergedArr = NULL;

    return;
}

void mergeSort(int arr[], int low, int high ){
    int mid;
    if(low == high)
        return;
    else{
        mid = (low + high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

void printArray(int arr[], int arrSize){
    int i;
    for(i = 0; i < arrSize; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    int arr[8] = {14, 5, 8, 10, 13, 1, 18, 3};
    int arrSize = 8;

    mergeSort(arr, 0, arrSize-1);
    printArray(arr, arrSize);

    return 0;
}
