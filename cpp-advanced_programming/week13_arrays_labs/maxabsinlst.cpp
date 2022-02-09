#include <iostream>
using namespace std;

const int MAX_ARR_LENGTH = 10;

int maxabsinlst(int lst[], int size);

int main(){
    int arrayLength, i, maxabsvalue;
    int array[MAX_ARR_LENGTH];
    //take user input as array length

    cout<<"Enter the number of elements in aarray not more than 10: ";
    cin>>arrayLength;

    cout<<"Please enter the elements of the list : ";
    for(i = 0; i < arrayLength; i++){
        cin>>array[i];
    }

    maxabsvalue = maxabsinlst(array, arrayLength);

    cout<<"Max absolute value is "<<maxabsvalue<<endl;
    return 0;
}

int maxabsinlst(int lst[], int size){
    int currentAbsElement, i, maxAbsElement;
    maxAbsElement = 0;
    for(i= 0; i< size; i++){
        if (lst[i]<0)
            currentAbsElement = -1 * lst[i];
        else 
            currentAbsElement = lst[i];

        if (currentAbsElement> maxAbsElement)
            maxAbsElement = currentAbsElement;
    }
    return maxAbsElement;
}