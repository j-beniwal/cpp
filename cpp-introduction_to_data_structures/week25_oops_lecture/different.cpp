#include <iostream>
using namespace std;

class Dog : public Pet{
    double earSize;
    public:
        Dog() : Pet(200000){}
        void speak() const{ cout <<"WOOF!" <<endl;}
};