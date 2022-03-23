# Week 30 - Linked Lists Linked List Lecture

In This module
- what is a linked list
- why do we need linked lists
- working with templates 
- how a linked list designed
- what are linked list used for.

What is linked list
- Linked list are a fundamental data structure. 
- In a list data is stored in a node. 
- Each node contains a data section and atlease one pointer (next).
- Data stores just one item of the list. 
- The pointer (next) are connected to form a chain of nodes. 
- The list is recorded by the head, a pointer to the first node. 
- The last node pointer will point to nullptr.

Why do we need linked lists?
- whereas arrays can access any element in O(1), linked list access is O(N).
- However array insertion is O(N), whereas linked list is O(N).
- Linked list can be reorganised, merged, etc, easily.
- Linked list don't need any overhead for storage, aside from pointers. 

Working with Templates
- in c++ a class can be templated when we don't know the data type of one or more elements.
- Before every function or class, we put "template <calss T>".  
- C++ replaces "T", in the function with the actual data type when it knows what data type it would be. 
- Example
  template <class T> 
  void mySwap(T &a, T &b){
      T temp = a
      a = b;
      b = temp;
  }

  here you can pass any data type, you can pass two elephants or to ints or chars or strings. 
  but both should be same. 

Templated Classes
- when a class is templated, its name changes to include the datatype which is templated
- In main this class will be included as 
  SomeVal <int> varName;
  SomeVal <char> varName;

      T getVal() const{ return data;}
      void setVal(T newValue);
  };

  template <calss T>
  void SomeVal<T>::setVal(T newValue){
      data = newValue;
  }

Designing a linked list node. 
- Node should be templated as we don't know what data type will be stored in it. 

##########################################################

template <calss T>
class LListNode{
    T data;
    LListNode<T>* next;
  public:
    LListNode(T newdata = T(), LListNode<T>* newNext = nullptr) : data (newData), next(newNext){}
    friend class LList <T>;
}

template <class T>
class LList{
    LListNode<T>* head;
    LListNode<T>* recursiveCopy(LListNode<T>* rhs);
  public:
    LList() : head(nullptr){}
    LList(const LList& rhs) : head(nullptr) {*this = rhs;} 
    LList<T>& operator=(const LList<T>& rhs);
    ~LList() { clear ();}
    void insertAtHead(T newdata);
    T removeFromHead();
    bool isEmpty() const { return head == nullptr;}
    void clear();
    void insertAtEnd(T newdata);
    void insertAtPoint (LListNode<T>* ptr, T newdata);
    int size() const;
}


Stopping at the end vs going off the end. 
- A common problem in understanding list is the misunderstanding of stopping at the end vs
  going of the end. 
- both solutions use a while, but with different conditions. 
- Stopping at the end: while(temp -> next! = nullptr)
- Going of the end: while(temp!= nullptr)

sample code
# a size function give the size of the linked list and handles ll with 0 nodes as well
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

# a insert at the end function to insert element at the end. handles ll with 0 nodes as well. 
    template <class T>
    void LList<T>::insertAtEnd(T newdata){
        if (isEmpty()){
            insertAtHead(newdata);
            return;
        }
        LListNode<T>* temp = new LListNode<T>(newdata);
        LListNode<T>* end = head;
        while (end -> next! = nullptr)
            end = end -> next;
        end -> next = temp;
    }

Recursion in lists
* Recusrsion is often used in the linked lists because the sub list looks 
  same as the larger list. 
* Here is the recursive copy operation done with the constructor for the Linked list node 
  class we created. 

Sample code

template <class T>
LListNode<T>* LList<T>::recursiveCopy(LListNode<T>* rhs){
  if (rhs == nullptr )
    return nullptr;
  return new LListNode<T>(rhs -> data, recursiveCopy (rhs -> next));
}

What are Linked List used for
- Anywhere we need storage with constant time insertion, no overhead but
  didn't need anything other than linear access. 
- In a later module you will use linked lists to develop stacks and queues, 
  other data structure 
- Used in FAT32 file system to save data on hard drive (each hard drive block contains
  a pointer to the next block; the FAT 32 contain only a pointer to the first block.)

In this module
- What is a linked list. 
- Why do we need a linked list. 
- Working with templates. 
- How a linked list designed. 
- What are linked list used for. 
