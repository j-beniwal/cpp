long long int merge(long long arr[], long long low, long long mid, long long high){
    int size = high - low; 
    int ia = low;
    int ib = mid;
    int it = 0;
        
    int *tmparr = new int[size];
    
    long long int count=0;
    
    while(ia < mid && ib < high){
        if(arr[ia] <= arr[ib]){
            tmparr[it] = arr[ia];
            it++;
            ia++;
        }
        else{
            tmparr[it] = arr[ib];
            count += (mid - ia);
            it++;
            ib++;
        }
    }
    
    while(ia < mid){
        tmparr[it] = arr[ia];
        it++;
        ia++;
    }
  
    while(ib < high){
        tmparr[it] = arr[ib];
        it++;
        ib++;
    }
    
    for(int i = 0, j = low; i < size; i++, j++){
        arr[j] = tmparr[i];
    }
    
    return count;
}

long long int mergeSort(long long arr[], long long low, long long high){
    if(high < low)
        return 0;
    long long mid = (high + low)/2;
    long long totalCount = 0;
    totalCount += mergeSort(arr[], low, mid-1);
    totalCount += mergeSort(arr[], mid, high);
    return totalCount += merge(arr[], low, mid, high );
}

// arr[]: Input Array
// N : Size of the Array arr[]
// Function to count inversions in the array.
long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    // two loops
    long long int inversionCount = 0;
    // for (int i = 0; i < N-1; i++){
    //     for(int j = i+1; j < N; j++){
    //         if(arr[j]<arr[i])
    //             inversionCount++;
    //     }
    // }
    
    inversionCount = meargeSort(arr[], 0,  N);
    
    return inversionCount;
}