#include <iostream>
using namespace std;

const int MAX_ARRY_LENGTH = 10;
float avgoflst(int lst[], int size);

int main(){
    int size,i;
    int lst[MAX_ARRY_LENGTH];
    float average; 

    // take the input from the user
    cout<<"Please enter the size of arry : "<<endl;
    cin>>size;

    cout<<"Please enter the elements of the array : "<<endl;
    for(i=0; i<size; i++){
        cin>>lst[i];
    }

    average = avgoflst(lst, size);
    cout<<"The average of the list is : "<<average<<endl;
    return 0;
}

float avgoflst(int lst[], int size){
    int i, sum;
    float average;
    
    sum = 0;
    for(i=0; i<size; i++){
        sum += lst[i];
    }

    average = (float)sum/size;

    return average;
}