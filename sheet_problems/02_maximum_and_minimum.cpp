// Maximum and minimum of an array using minimum number of comparisons
#include <iostream>
using namespace std;

void minMaxElement(int & min, int & max, int arr[], int size);

int main(){
    int arr[] = {9, 2, 3, 4, 5, 6, 0, 1};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int min=0, max=0;
    minMaxElement(min, max, arr, size);
    cout<<"Minimum element: "<<min<<"\nMaximum element: "<<max<<endl;
    return 0;
}

void minMaxElement(int & min, int & max, int arr[], int size){
    min = arr[0], max = arr[0];
    int comp = 0;
    for(int i = 1; i < size; i++){
        if (arr[i] > max)
        {
            max = arr[i];
            comp++;
        }
        else if (min > arr[i])
        {
            min = arr[i];
            comp++;
        }
    }
    cout<<"total comp: "<<comp<<endl;
    return;
}