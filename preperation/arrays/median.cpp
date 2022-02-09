#include <iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
int findMeargedMedian(int a[], int b[], int sizea, int sizeb){
    int toatalSize = sizea + sizeb;
    int median;
    int *arr = new int[toatalSize];

    int ia = 0 , ib = 0, iArr = 0;

    while(ia < sizea && ib < sizeb){
        if(a[ia] < b[ib]){
            arr[iArr] = a[ia];
            iArr++;
            ia++;
        }
        else{
            arr[iArr] = b[ib];
            iArr++;
            ib++;
        }
    }
    
    while(ia < sizea){
        arr[iArr] = a[ia];
        iArr++;
        ia++;
    }
    while(ib < sizeb){
        arr[iArr] = b[ib];
        iArr++;
        ib++;
    }

    if (toatalSize % 2){
        median = arr[toatalSize/2];
    }
    else{
        median = (arr[toatalSize/2]+ arr[(toatalSize/2)-1])/2;
    }

    delete [] arr;
    arr = nullptr;

    return median;
}

int median(int arr[], int n){
    if(n % 2){
        return n/2;
    }
    else{
        return(arr[n/2]+arr[(n/2)-1]);
    }
}

int findMedianComparision(int a[], int b[], int n){
    // check the size
    if(n <= 0)
        return -1;
    else if (n == 1)
        return (a[0] + b[0])/2;
    if (n == 2)
        return (max(a[0], b[0]) + min(a[1], b[1]) )/2;

    int m1 = median(a, n);
    int m2 = median(b, n);

    if( m1 == m2)
        return m1;

    if (m1 < m2)
    {
    if (n % 2 == 0)
        return findMedianComparision(a + n / 2 - 1, b, n - n / 2 + 1);
    return findMedianComparision(a + n / 2, b, n - n / 2);
    }

    if (n % 2 == 0)
        return findMedianComparision(b + n / 2 - 1, a, n - n / 2 + 1);
    return findMedianComparision(b + n / 2, a, n - n / 2);
    
}


int main(){
    int a[5] = {1, 12, 15, 26, 38};
    int b[5] = {2, 13, 17, 30, 45};

    // int median = findMeargedMedian(a, b, 6, 5);
    int median = findMedianComparision(a, b, 5);
    cout<<"Median is : "<<median<<endl;
    // devide the first array into two parts 
    // find the middle element.

    // devide the second array in two parts 
    // find the middle element

    // compare the two middle elements. 

    // element form a < element form b.
    // => all the elements in array a including this element are less than the element of b
    // => location of the element from array b is after all these elements 
    // => location of the element from array b in the accumelated array is n(a)/2 + n(b)/2 or grater.
    // 

    // element from b < element from a. 

    // 


    return 0;
}