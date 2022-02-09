#include <iostream>
using namespace std;

template <class T>
void swapAnything(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}


template <class T>
class someVal{
    private:
        T data;
    public:
        someVal(){ data = 0;};
        someVal(T &inputData) { data = inputData;};
        T getVal() const {return data;};
        void setVal(T &newData);
};

template <class T>
void someVal<T>::setVal(T &newData){
    data = newData;
};

int main(){
    // string a = "Hello" ;
    // string b = "world!!" ;
    // cout<<"Values before is a: "<<a<<" b: "<<b<<endl;
    // swapAnything(a, b);
    // cout<<"Swaped value of a: "<<a<<" b: "<<b<<endl;
    int b = 5;
    someVal<int> a(b);
    cout<<"value save by default is : "<<a.getVal()<<endl;
    int k = 90;
    a.setVal(k);
    cout<<"new value set by function is: "<<a.getVal()<<endl;
    return 0;
}