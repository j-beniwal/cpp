#include <iostream>
using namespace std;

int factorial (int num);
int k_combinations(int n, int k);

int main(){
    int n, k, n_choose_k;

    cout<<"Please enter n and k where (n>=k) : ";
    cin>>n>>k;
    n_choose_k = k_combinations(n,k);
    cout<<"n choose k is "<<n_choose_k<<endl;

    return 0;
}

int k_combinations(int n, int k){
    int nFact, kFact, n_kFact;
    nFact = factorial(n);
    kFact = factorial(k);
    n_kFact = factorial(n-k);

    return nFact/(kFact*n_kFact);
}

int factorial (int num){
    int fectRes, i;

    fectRes = 1;
    for ( i = 1; i <= num; i++)
    {
        fectRes *= i;
    }
    return fectRes;
}