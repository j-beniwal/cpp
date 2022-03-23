#include <iostream>
using namespace std;

void reverseArray(int arr[], int size);
void printArray(int arr[], int size);

int const SIZE = 6;
int main(){
    int arr[SIZE] = {1, 2, 3, 4, 5, 6};
    cout<<"Array before reverse: "<<endl;
    printArray(arr, SIZE);
    reverseArray(arr, SIZE);
    cout<<"Reversed array"<<endl;
    printArray(arr, SIZE);
    return 0;
}

void reverseArray(int arr[], int size){
    int temp;
    int half = ((int)size/2) -1;
    size = size-1;
    for(int i = 0; i<= half; i++){
        temp = arr[i];
        arr[i] = arr[size-i];
        arr[size-i] = temp;
    }
}

void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}  

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
