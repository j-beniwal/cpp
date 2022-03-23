#include <iostream>
using namespace std;

int PalinObj(int x, int &y){
    if (x/10 == 0){
        y = 10;
        return x%10;
    }
    else{
        int ret = PalinObj(x/10, y) + (x%10)*y;
        y *= 10;
        return ret;
    }
}

int main(){
    int y = 0;
    cout<<PalinObj(1234, y)<<endl;
    return 0;
}