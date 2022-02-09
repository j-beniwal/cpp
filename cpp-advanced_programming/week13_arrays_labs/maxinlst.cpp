#include <iostream>
using namespace std;

const int MAX_ARRY_LENGTH = 20;

int maxinlst(int arr[], int arryLength);

int main(){
    int arrayLength, i, maxElement;
    int arry[MAX_ARRY_LENGTH];

    // tke the length from user
    cout<<"Please enter the length of the array: ";
    cin>>arrayLength;

    cout<<"Please enter the array elements : ";
    for(i = 0; i < arrayLength; i++){
        cin>>arry[i];
    }

    maxElement = maxinlst(arry, arrayLength);
    cout<<"Maximum Element in the array : "<<maxElement<<endl;
    return 0;
}

int maxinlst(int arr[], int arryLength){
    int maxElement, i;
    maxElement = 0;
    for(i = 0; i < arryLength; i++){
        if (maxElement<arr[i])
            maxElement = arr[i];
    }
    return maxElement;
}