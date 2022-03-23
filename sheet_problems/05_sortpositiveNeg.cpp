#include <iostream>
using namespace std;

void swap(int a[], int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    return; 
}

void sort012(int a[], int n)
{
    int low = 0;
    int high = n-1;
    
    while(low <= high){
        if (a[low] >= 0){
            swap(a, low, high);
            high -= 1;
        }
        else{
            low += 1;
        }
    
    }
    return;
}

void printArray(int a[], int n){
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    int a[9] = { -1, 2, 6, 8, -7, 2, -4, -1, 2};
    printArray(a, 9);
    sort012(a, 9);
    printArray(a, 9);
    return 0;
}