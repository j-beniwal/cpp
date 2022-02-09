// Write a recursive implementation for the function:
// bool areAllEven(int[] arr, int element_cout);
// That given an arry of integers arr and its logical size element_cout, the function returens true
// if all of the elements of arr are even. 

#include <iostream>
using namespace std;

bool areAllEven(int* arr, int element_cout);

int main(){
    int element_cout;
    bool even;
    cout<<"Enter the number of elements in array: ";
    cin>>element_cout;
    int *arr = new int[element_cout];

    cout<<"Please enter the elements of the array"<<endl;
    for(int i = 0; i < element_cout; i++){
        cin>>arr[i];
    }
    even = areAllEven(arr, element_cout);

    if(even)
        cout<<"Yes, all elements are even!"<<endl;
    else    
        cout<<"All elements are not even"<<endl;

    delete [] arr;
    arr = NULL;

    return 0;
}

// bool areAllEven(int* arr, int element_cout){
//     if (element_cout ==1 ){
//         return (arr[element_cout-1]%2 == 0);
//     }
//     else {
//         if (areAllEven(arr,element_cout-1))
//             return (arr[element_cout-1]%2 == 0);
//         else
//             return false;
//     }
// }

bool areAllEven(int* arr, int element_cout){
    // cout<<"1"<<endl;
    if (element_cout ==0 ){
        return true;
    }
    else {
        // cout<<arr[element_cout-1]<<endl;
        if (arr[element_cout-1]%2 == 0){
            return areAllEven(arr,element_cout-1);
        }
        else
            return false;
    }
}