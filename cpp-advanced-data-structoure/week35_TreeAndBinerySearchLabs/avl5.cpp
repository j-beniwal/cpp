// AVL - Insert Function Lab

// Description

// Using the node definition below, write a function that inserts a new node into an AVL tree that stores integers. This version of the function should balance the tree and return the new root node. If it is passed a null value for node it should create a new node and return it.

// Use this definition for the nodes in the AVL tree:

// class Node 
// { 
//   public:
//   int key; 
//   Node *left; 
//   Node *right; 
//   int height; 
// };

// The Node is defined in a header file called cpluspluslabs.h that you should include in your code but not upload in your solution.

// Here is an example call to the function

// Node *root = insert(NULL, 10);

// root = insert(root, 20);

// root = insert(root, 30);

// root = insert(root, 40);

// root = insert(root, 50);

// root = insert(root, 25);

   

 

// After the above code executes the constructed AVL Tree would be

//       30

//      / \

//    20   40

//    / \     \

//  10  25     50

 

// Function Signature

// Node* insert(Node* node, int key);


// File Name 

// avl.cpp

// Score

// There are three tests each worth 2 points

// Note: You do not need to submit any other code including the main method or any print statements. ONLY the insert function and any support functions you write are required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.

