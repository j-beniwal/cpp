#include <iostream>
using namespace std;

int longestArrayLength(int arr[], int size, int k){
    int count = 0;
    int longestArrayLength = 1;
    int currentArrayLength = 1;
    for(int i = 0; i < size; i++){
        if(arr[i] <= k)
            count++;
        if(i < size -1){
            if(arr[i]< k && arr[i+1] < k){
                currentArrayLength++;    
            }
            else{
                if(currentArrayLength > longestArrayLength)
                    longestArrayLength = currentArrayLength;
                currentArrayLength = 1;
            }
        }
        
    }
    if(currentArrayLength > longestArrayLength)
        longestArrayLength = currentArrayLength;
    cout<<"count: "<<count<<endl;
    cout<<"longest Array Length: "<<longestArrayLength<<endl;
    return 0;
}

int main(){

    int arr[] = {1, 2, 3, 5, 7, 4, 11, 6, 8, 15};
    int k = 6;
    longestArrayLength(arr, 10, 6);
    return 0;
}



