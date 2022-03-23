#include <iostream>
using namespace std;

const int MAX_CLASS_SIZE = 60;
int main(){
    int students,i,sum;
    float average;
    int grades[MAX_CLASS_SIZE];
    // get the number of the students;
    cout<<"Enter the number of studetns not more than "<<MAX_CLASS_SIZE<<" : ";
    cin>>students;

    cout<<"Enter the grades of the studetns :"<<endl;
    sum = 0;
    for(i=0; i<students; i++){
        cin>>grades[i];
        sum += grades[i]; 
    }
    
    average = (float)sum/(float)students;
    cout<<"The average : "<<average<<endl;

    cout<<"Grades grater than average are: ";
    for(i=0; i<students; i++){
        if(grades[i]>(int)average)
            cout<<grades[i]<<", ";
    }
    cout<<endl;
    return 0;
}