#include <iostream>
using namespace std;

int minSwap(int arr[], int n, int k);

int main(){

    int arr[] = {10, 12, 20, 20, 5, 19, 19, 12, 1, 20, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    int output = minSwap(arr, size, 1);
    cout<<"output: "<<output<<endl;

    return 0;
}


int minSwap(int arr[], int n, int k) {
        // Complet the function
        int cnt = 0;
        int minSwaps = 0;
        int currentSwaps = 0;
        
        for(int i = 0; i < n; i++){
            if(arr[i]<= k)
                cnt++;
        }
        
        if (cnt == n || cnt == 0 || cnt == 1 || n <=2)
            return 0;
        
        // create a window
        int iBegin = 0, iEnd = cnt-1;
        // move the window
        for(int i = 0; i < cnt; i++){
            if(arr[i]>k)
                currentSwaps++;
        }
        minSwaps = currentSwaps;
        
        // update the swap count
        for(iEnd = cnt-1; iEnd<n-1;){
            iEnd++;
            iBegin++;
            if(arr[iEnd]<=k && arr[iBegin-1]>k)
                currentSwaps--;
            else if(arr[iEnd]>k && arr[iBegin-1]<=k)
                currentSwaps++;
            if(currentSwaps< minSwaps)
                minSwaps = currentSwaps;
            
            cout<<"minSwaps: "<<minSwaps<<endl;
        }
        // return the value;
        if(minSwaps < 0)
            minSwaps = 0;
        return minSwaps;
        
    }