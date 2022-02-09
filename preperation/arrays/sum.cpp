#include <iostream>
using namespace std;

int binarySearch(int A[], int high, int low, int element){
    if(high<low){
        // cout<<"high "<<high<<" low "<<low<<endl;
        return false;
    }
    int mid = (high+low)/2;
    if(element == A[mid])
        return true;
    else if(element > A[mid]){
        binarySearch(A, high, mid+1, element);
    }
    else if(element < A[mid]){
        binarySearch(A, mid-1, low, element);
    }
    return false;
        
}

bool find3Numbers(int A[], int n, int X)
{
    //Your Code Here
    sort(A, A+n);
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int element = X - (A[i]+A[j]);
            if (element < 0)
                continue;
            cout<<"element "<<element<<endl;
            if(binarySearch(A, n, j, element))
                return true;
        }
    }
    return false;
}

int main(){
    int arr[] = {589, 343, 609, 61, 222, 759, 955, 889, 147, 691, 950, 844, 431, 621, 749, 68, 537, 784, 36, 227, 186, 39, 854, 630, 225, 749, 924, 360, 258, 767, 945, 956, 319, 727, 412, 26, 356, 2, 550, 497, 585, 516, 965, 343, 76, 914, 143 ,197 ,949, 73};
    int size = sizeof(arr)/sizeof(arr[0]);

    // cout<<find3Numbers(arr, size, 182)<<endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            if(j == 3)
                continue;
            else
                cout<<j<<" ";
            cout<<"hello   ";
        }
        cout<<endl;
    }

    return 0;
}