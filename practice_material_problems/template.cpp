#include <iostream>
using namespace std;

template <class T>
T myMax(T x, T y){
    return (x>y) ? x : y;
}

int main(){

    int x = 5, y = 7;

    cout<<myMax(x, y)<<endl;
    cout<<myMax('a', 'b')<<endl;

    cout<<myMax<double> (3.5, 8.23)<<endl;

    return 0;
}