#include <iostream>
using namespace std;

class LList;

class LListNode
{
private:
    int data;
    LListNode * next;
public:
    LListNode(int newData = int(), LListNode * newNext = nullptr){data = newData; next = newNext;}
    // ~LListNode();
    friend class LList;
};

class LList
{
private:
    LListNode * head;
public:
    LList(){head = nullptr;}                                // default constructor
    LList(const LList & rhs): head(nullptr) { *this = rhs;} // copy constructor
    // ~LList();                                            // destructor
    // LList& operator=(const LList& rhs);                  // asignment operator
    bool isEmpty() const { return head == nullptr;}
    void insertAtHead(int newData);
    void insertAtEnd(int newData);
    void printList();
    int size() const;
};

int LList::size() const{
    int count = 0;
    LListNode* temp  = head;
    while (temp != nullptr){
        count++;
        temp = temp -> next;
    }
    return count;
}

void LList::printList(){
    cout<<"in print list"<<endl;
    LListNode * temp;
    cout<<"created temp pointer"<<endl;
    temp = head;
    cout<<"Head pointer value: "<<head<<endl;
    cout<<"Temp pointer value: "<<temp<<endl;    
    cout<<"Head pointer data dereferance: "<<head->data<<endl;
    cout<<"Head pointer next dereferance: "<<head->next<<endl;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void LList::insertAtEnd(int newData){
    if (isEmpty()){
        insertAtHead(newData);
        return;
    }
    LListNode* temp;
    LListNode newNode;
    temp = &newNode;
    temp->data = newData;
    temp->next = nullptr;
    LListNode* end = head;
    while(end->next != nullptr){
        end = end -> next;
    }
    end -> next = temp;
    return;
}

void LList::insertAtHead(int newData){
    LListNode newNode;
    newNode.data = newData;
    newNode.next = nullptr;
    head = &newNode;
    cout<<"head pointer data dereference: "<<head->data<<endl;
    cout<<"head pointer next dereference: "<<head->next<<endl;
    cout<<"head pointer value: "<<head<<endl;
    return;
}

int main(){
    LList myLList;
    // for(int i = 0; i < 10; i++)
    //     myLList.insertAtEnd(i);
    myLList.insertAtHead(2);
    
    cout<<"isList Empty: "<<myLList.isEmpty()<<endl;

    myLList.printList();
    
    return 0;
}