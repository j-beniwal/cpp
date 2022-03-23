#include <iostream>
using namespace std;

void swap(int *a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<a<<" "<<b<<endl;
    return;
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    swap( &arr[1], &arr[4]);
    cout<<arr[1]<<" "<<arr[4]<<endl;
    return 0;
}