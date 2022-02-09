#include <iostream>
#include <cmath>
using namespace std;

//const float PI = 3.14;

int main(int argc, char* argv[]){
    // take the input from the user as radius
    float radius;
    float area;

    cout<<"Enter the radius of the circle : "<<endl;
    cin>>radius;

    area = M_PI * radius * radius;

    cout<<"Area of the circle is : "<<area<<endl;

    return 0;
    
}