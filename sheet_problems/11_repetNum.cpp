#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(int arr[], int n){
    int seriesSum = 0, coutnt = 0, i;
    float trueSum = 0;
    for( i = 0; i < n; i++){
        seriesSum += arr[i];
    }
    trueSum = (i-1)*(i)/2;
    return seriesSum - trueSum;
        
}

int main(){
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 8 };
    int returnValue;
    returnValue = findDuplicate(arr, 9);
    cout<<"Duplicate Value is: "<<returnValue<<endl;
    return 0;
}