#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    for(int i = 0; i< 100; i++)
        v.push_back(i * 100);
    for(int i = 0; i < v.size(); i++)
        cout<< v[i] <<endl;
    
    // printing using ranged for loop
    for (int i : v)
        cout<< i << endl;

    return 0;
}
