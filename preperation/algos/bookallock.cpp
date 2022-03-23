#include <iostream>
using namespace std;

class Solution 
{
    public:
    
    bool checkAssignment(int A[], int pages, int N, int M){
        int stu =1;
        int sum = 0;
        for(int i = 0; i < N; i++){
            if(pages<A[i])
                return false;
            if(sum+A[i]>pages){
                stu++;
                sum = A[i];
                cout<<"stu: "<<stu<<endl;
                if(stu > M) return false;
            }
            else
                sum += A[i];
            cout<<"sum: "<<sum<<endl;
        }
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        int totalpages = 0;
        for(int i = 0; i < N; i++){
            totalpages += A[i];
        }
        cout<<"toatl pages: "<<totalpages<<endl;
        int lb = 0;
        int ub = totalpages;
        int ans;
        int mid; 
        bool result;
        
        while(lb<=ub){
            mid = (ub + lb)/2;
            cout<<"mid: "<<mid<<endl;
            result = checkAssignment(A, mid, N, M);
            cout<<"result: "<<result<<endl;
            if(!result){
                lb = mid+1;
            }
            else{
                ans = mid;
                ub = mid-1;
            }
            cout<<endl;
            cout<<"ub: "<<ub<<" lb: "<<lb<<endl;
        }
        return ans;
    }
};

int main(){

    Solution solv;
    int arr[5] = {51, 151, 227, 163, 55};
    int result = solv.findPages(arr, 5, 3);

    cout<<"final result: "<<result;

    return 0;
}