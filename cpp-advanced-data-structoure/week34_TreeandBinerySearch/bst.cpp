#include <iostream>
#include <queue>
using namespace std;

template <class T>
class BSTNode{
    T data;
    BSTNode<T> * parent;
    BSTNode<T> * left;
    BSTNode<T> * right;
public:
    BSTNode(T newdata = T(), BSTNode<T>* newparent = nullptr, BSTNode<T>* newLeft = nullptr, BSTNode<T> * newRight = nullptr): data(newdata), parent(newparent), left(newLeft), right(newRight){}
    friend class BST<T>;
    int getsize() const;
};

template <class T>
int BSTNode<T>::getsize() const {
    int count = 1;
    if (left != nullptr)
        coutn += left->getsize();
    if (right != nullptr)
        count += right->getsize();
    return count;
}

template <class T>
class BST{
    BSTNode<T> * root;
public:
    void printInOrder(BSTNode<T> * node);
    void printPreOrder(BSTNode<T> * node);
    void printPostOrder(BSTNode<T> * node);
    void printLevelOrder(BSTNode<T> * node);
    void insert(T item);
    void remove(BSTNode<T> *& temp);
};

template <class T>
void BST<T>::printInOrder(BSTNode<T>* node){
    if (node != nullptr){
        printInOrder(node->left);
        cout<<node->data<<", ";
        printInOrder(node->right);
    }
}

template <class T>
void BST<T>::printPreOrder(BSTNode<T>* node){
    if (node != nullptr){
        cout<<node->data<<", ";
        printInOrder(node->left);
        printInOrder(node->right);
    }
}

template <class T>
void BST<T>::printPostOrder(BSTNode<T>* node){
    if (node != nullptr){
        printInOrder(node->left);
        printInOrder(node->right);
        cout<<node->data<<", ";
    }
}

template <class T>
void BST<T>::printLevelOrder(BSTNode<T> * node){
    queue<BSTNode<T>*> q;
    q.push(root);
    while (!q.empty())
    {
        BSTNode<T>* temp = q.front();
        q.pop();
        cout<< temp->data <<", ";
        if(temp -> left != nullptr)
            q.push(temp->left);
        if(temp ->right != nullptr)
            q.push(temp->right);
    }
}

template <class T>
void BST<T>::insert(T item){
    if (root == nullptr){
        root = new BSTNode<T>(item);
        return;
    }
    BSTNode<T>* temp = root;
    BSTNode<T>* prev = root;
    while(temp != nullptr){
        prev = temp;   
        if(item< temp->data)
            temp = temp->left;
        else
            temp = temp->right;
    }
    if(item < prev->data)
        prev->left = new BSTNode<T>(item, prev);
    else    
        prev->right = new BSTNode<T>(item, prev);
}


template <class T>
void BST<T>::remove(BSTNode<T> * &temp){
    // remove given the node has no childeren
    if (temp->left == nullptr && temp->right == nullptr){
        if(parent == nullptr)
            root = nullptr;
        else if (parent->left == temp)
            parent->left = nullptr;
        else
            parent->right = nullptr;
        delete temp;
    }

    // remove the node given the it has one child. 
    else if (temp->left == nullptr) //we have a right but no left
    {
        //permote temp->right
        BSTNode<T> * toDelete = temp->right;
        temp->data = toDelete->data;     // copy data to promote right child
        temp->left = toDelete->left;    // copy right child's left children pointer
        if (temp->left != nullptr)      // if left childs exists
            temp->left->parent = temp;  // update the parent of left child
        temp->right = toDelete->right;  // copy right child's right children pointer
        if(temp->right != nullptr)      // if right childs exists
            temp->right->parent = temp; // update the parent of right child. 
        delete toDelete;
    }
    else if (temp->right == nullptr) //we have a left but no right
    {
        //permote temp->left
        BSTNode<T> * toDelete = temp->left;
        temp->data = toDelete->data;
        temp->left = toDelete->left;
        if (temp->left != nullptr)
            temp->left->parent = temp;
        temp->right = toDelete->right;
        if(temp->right != nullptr)
            temp->right->parent = temp;
        delete toDelete;
    }
    // removal given the node has 2 children. 
    else{   // we have both the children left and right, so lets make it easy by deleting someone else XD
            // 1. Find max of left sub tree. OR
            // 2. Find minimum of the right sub tree.
        BSTNode<T> * minOfRight = temp->right;
        while (minOfRight->left != nullptr)
        {
            minOfRight = minOfRight->left;
        }
        temp->data = minOfRight->data;
        remove(minOfRight); // recursion but not infinite bcz no left child.  
        
    }
}
int main(){

    return 0;
}