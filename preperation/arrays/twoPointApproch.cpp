#include <iostream>
#include <algorithm>
using namespace std;

bool isPairSum(int arr[], int sum, int size){
    int ibegin = 0;
    int iend = size -1;

    for(int ibegin = 0; ibegin < iend; ){
        if(arr[ibegin]+ arr[iend] == sum)
            return true;
        else if(arr[ibegin] + arr[iend] < sum)
            ibegin++;
        else    
            iend--;
    }

    return false;
}

int main(){
    int array[] = { 2, 3, 5, 8, 9, 10, 11 };
    int value = 40;
    int size = sizeof(array)/sizeof(array[0]);
    // cout<<"size is: "<<size<<endl;
    sort(array, array+size);
    cout<<"Is pair: "<<isPairSum(array, value, size)<<endl;
    return 0;
}