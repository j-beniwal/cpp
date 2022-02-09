// Description
// Using the node definition below, write a function that takes parameters 
// for the three data elements and adds the node to the beginning of the 
// linked list. The definition of the Node is in a header file called 
// cpluspluslabs.h that you should include but not submit it with your solution.
// Use this definition for the nodes in the linked list:
// class NODE {
// public:
// string firstname;
// string lastname;
// string email;
// NODE* next;
// };

// Here is an example call to the function
// NODE* data = nullptr; 
// add_node_head(&data,”aspen”,”olmsted”,”aspeno@aol.com”);
// add_node_head(&data,”sally”,”jones”,”sjones@aol.com”);
// After the above code executes there will be two records in the linked list with Sally’s recording coming first..

// Function Signature
// void add_node_head(NODE** data, string firstname,string lastname, string email);
// File Name 
// addnodeh.cpp
// Score
// There are three tests each worth 2 points
// Note: You do not need to submit any other code including the main method or any print statements. ONLY the add_node_head function is required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.

#include <iostream>
using namespace std;

class NODE {
public:
string firstname;
string lastname;
string email;
NODE* next;
};

void add_node_head(NODE** data, string firstname,string lastname, string email){
    NODE *newNode = new NODE;
    newNode->firstname = firstname;
    newNode->lastname = lastname;
    newNode->email = email;
    if (*data == nullptr){
        // cout<<"data value: "<<*data<<endl;
        newNode->next = nullptr;
    }
    else{
        // cout<<"data value: "<<*data<<endl;
        newNode->next = *data;
    }

    // cout<<endl<<"values inserted"<<endl;
    // cout<<newNode->firstname<<endl<<newNode->lastname<<endl<<newNode->email<<endl<<newNode->next<<endl<<endl;

    *data = newNode;
    return;
}

void add_node_tail(NODE** data, string firstname,string lastname, string email){
    NODE *newNode = new NODE;
    newNode->firstname = firstname;
    newNode->lastname = lastname;
    newNode->email = email;
    if (*data == nullptr){
        // cout<<"data value: "<<*data<<endl;
        newNode->next = nullptr;
        *data = newNode;
    }
    else{
        // cout<<"data value: "<<*data<<endl;
        NODE * itrativePtr = *data;
        while(itrativePtr->next != nullptr)
            itrativePtr = itrativePtr->next;
        itrativePtr->next = newNode;;
    }

    // cout<<endl<<"values inserted"<<endl;
    // cout<<newNode->firstname<<endl<<newNode->lastname<<endl<<newNode->email<<endl<<newNode->next<<endl<<endl;


    return;    
}

int main(){
    NODE* data = nullptr; 
    // add_node_head(&data,"aspen","olmsted","aspeno@aol.com");
    // add_node_head(&data,"sally","jones","sjones@aol.com");

    add_node_tail(&data,"aspen","olmsted","aspeno@aol.com");
    add_node_tail(&data,"sally","jones","sjones@aol.com");

    NODE * itrativePtr = data;
    while(itrativePtr != nullptr){
        cout<<"first name: "<<itrativePtr->firstname<<endl;
        cout<<"last name : "<<itrativePtr->lastname<<endl;
        cout<<"email     : "<<itrativePtr->email<<endl;
        // cout<<itrativePtr->next<<endl;
        itrativePtr = itrativePtr->next;
        // cout<<itrativePtr->next<<endl;
        cout<<endl;
    }
    return 0;
}