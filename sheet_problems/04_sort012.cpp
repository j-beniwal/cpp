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
    int mid = 0;
    int high = n-1;
    
    while(mid <= high){
        if (a[mid] == 0){
            swap(a, mid, low);
            low += 1;
            mid += 1;
        }
        else if (a[mid] == 1){
            mid += 1;
        }
        else if (a[mid] == 2){
            swap(a, mid, high);
            high -= 1;
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
    int a[9] = { 1, 2, 1, 0, 0, 2, 0, 1, 2};
    printArray(a, 9);
    sort012(a, 9);
    printArray(a, 9);
    return 0;
}