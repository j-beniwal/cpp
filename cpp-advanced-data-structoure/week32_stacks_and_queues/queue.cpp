#include <iostream>
#include <list>
using namespace std;

template <class T>
class Queue{
    private:
        list<T> data;
    public:
        void enqueuq(T newItem){data.push_back(newItem);}
        T dequeuq(){ return data.pop_front();}
        T top() const { return *data.begin();}
        bool isEmpty(){ return data.size() == 0;}
        int size(){ return data.size();}
        void clear() { data.clear();}
};      