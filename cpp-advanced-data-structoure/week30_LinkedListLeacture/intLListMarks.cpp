#include <iostream>
using namespace std;

class LListNode
{
private:
    int data;
    LListNode * next;
public:
    LListNode(int newData = int(), LListNode * newNext = nullptr): data(newData), next(newNext){}
    ~LListNode(){}
    void setValue(int newData, LListNode * newNext){data = newData; next = newNext;}
    friend class LList;
}; 

class LList
{
private:
    LListNode * head;
    LListNode * recursiveCopy(LListNode * rhs);
public:
    LList(){head = nullptr;}
    LList(const LList &rhs){head = nullptr; *this = rhs;}
    LList &operator = (const LList &rhs);
    ~LList(){clear();};
    bool isEmpty() const {return head == nullptr;}
    void clear();
    void inseartAtHead(int newData);
    void inseartAtEnd(int newData);
    void inseartAtPoint(LListNode * ptr, int newData);
    int size() const;
};

int LList::size() const{
    int count = 0;
    LListNode * temp = head;
    while( temp != nullptr){
        count++;
        temp = temp->next;
    }
    return count;
}

void LList::inseartAtEnd(int newData){
    if (isEmpty()){
        inseartAtHead(newData);
        return;
    }
    LListNode * temp;
    LListNode(newData);
    LListNode * end = head;
    while(temp->next != nullptr){
        end = end -> next;
    }
    end -> next = temp;
}

LListNode * LList::recursiveCopy(LListNode * rhs){
    if (rhs == nullptr)
        return nullptr;
    return new LListNode(rhs->data, recursiveCopy(rhs->next));
}


int main(){

    return 0;
}