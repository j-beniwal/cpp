#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
int searchPositive(int arr[], int currentIndex, int &positiveSearchIndex, int size){
    for(int i= max(currentIndex, positiveSearchIndex); i<size; i++){
        if(arr[i] >= 0){
            positiveSearchIndex = i;
            return i;
        }
    }
    positiveSearchIndex = size;
    return -1;
}

int searchNegetive(int arr[], int currentIndex, int &negetiveSearchIndex, int size){
    for(int i = max(currentIndex, negetiveSearchIndex); i<size; i++){
        if(arr[i] < 0)
            return i;
    }
    return -1;
}

void shift(int arr[], int shiftIndex, int currentIndex, int size){
    int tmp = arr[shiftIndex];
    for(int i = shiftIndex; i > currentIndex; i--){
        arr[i]= arr[i-1];
    }
    arr[currentIndex]= tmp;
    return;
}

void rearrange(int arr[], int size){
    int ipos = 0;
    int ineg = 0;

    bool isPreviousPos = true;
    for(int i = 0; i < size && ipos< size && ineg < size; i++){
        if(isPreviousPos){
            if(arr[i]<0){
                // i++;
            }
            else{
                int ret = searchNegetive(arr, i, ineg, size);
                if(ret != -1)
                    shift(arr, ret, i, size);
            }
            isPreviousPos = false;
        }
        else{
            if(arr[i]>=0){
                // i++;
            }
            else{
                int ret = searchPositive(arr, i, ipos, size);
                if(ret != -1)
                    shift(arr, ret, i, size);
            }
            isPreviousPos = true;
        }
    }
    return;
}

int main(){
    // int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int arr[] = {-5, -2, 5, 2, 4, 7, -1, -8, 0, -8};
    int size = sizeof(arr)/sizeof(arr[0]);

    rearrange(arr, size);
    printArray(arr, size);

    return 0;
}