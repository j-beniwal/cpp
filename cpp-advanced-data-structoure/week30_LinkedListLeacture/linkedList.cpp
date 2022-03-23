#include <iostream>
using namespace std;

template <class T>
class LList;

template <class T>
class LListNode
{
private:
    T data;
    LListNode<T> * next;
public:
    LListNode(T newData = T(), LListNode<T>* newNext = nullptr){data = newData; next = newNext;}
    // ~LListNode();
    friend class LList<T>;
};

template <class T>
class LList
{
private:
    LListNode<T> * head;
public:
    LList(){head = nullptr;}
    LList(const LList & rhs): head(nullptr) { *this = rhs;} // copy constructor
    // ~LList();                                               // destructor
    LList<T>& operator=(const LList<T>& rhs);               // asignment operator
    bool isEmpty() const { return head == nullptr;}
    void insertAtHead(T newData);
    void insertAtEnd(T newData);
    void printList();
    void insertAtPoint (LListNode<T>* ptr, T newdata);
    int size() const;
};

template <class T>
void insertAtPoint (LListNode<T>* ptr, T newdata){
    
}


template <class T>
int LList<T>::size() const{
    int count = 0;
    LListNode<T>* temp  = head;
    while (temp != nullptr){
        count++;
        temp = temp -> next;
    }
    return count;
}

template <class T>
void LList<T>::printList(){
    LListNode<T> * temp;
    temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

template <class T>
void LList<T>::insertAtEnd(T newData){
    if (isEmpty()){
        insertAtHead(newData);
        return;
    }
    LListNode<T>* temp = new LListNode<T>(newData);
    LListNode<T> * end = head;
    while(end->next != nullptr){
        end = end -> next;
    }
    end -> next = temp;
    return;
}

template <class T>
void LList<T>::insertAtHead(T newData){
    LListNode<T> * temp = new LListNode<T>(newData);
    head = temp;
    return;
}

int main(){
    LList<int> myLList;
    for(int i = 0; i < 10; i++)
        myLList.insertAtEnd(i);
    
    cout<<"elements in the linked list"<<endl;
    myLList.printList();

    cout<<"size of the linked list: "<<myLList.size()<<endl;
    
    return 0;
}