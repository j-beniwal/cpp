#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int aggressiveCows(int arr[], int N, int C){
    sort(arr, arr+N);
    printArray(arr, N);
    int highD = arr[N-1]-arr[0];
    int lowD = 1;
    int mid = 0;
    int ans = 0;
    int dist = 0;
    int currentIndx;

    while(lowD < highD){
        cout<<"lowD: "<<lowD<<" highD: "<<highD;
        dist = highD - lowD;
        cout<<" dist: "<<dist<<endl;
        int cowsPlaced = 1;
        currentIndx = 0;
        for(int i = 0; i < N-1; i++){
            if(arr[i]-arr[currentIndx]>dist){
                cowsPlaced++;
                currentIndx = i;
                cout<<"cowsPlaced "<<cowsPlaced<<" currentIndex: "<<currentIndx<<endl;
            }
        }
        if(cowsPlaced == C){
            ans = dist;
            lowD = (highD + lowD)/2;
            break;
        }
        else
            highD = (highD + lowD)/2;

    }
    return ans;
}

int main(){
    int t;  // number of test cases
    int N, C;

    cin>>t;
    cin>>N>>C;

    int *arr = new int[N];

    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }

    int minDistance = aggressiveCows(arr, N, C);

    cout<<"ans is : "<<minDistance<<endl;

    return 0;
}