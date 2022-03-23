// AVL - Unbalanced Insert Function Lab

// Description

// Using the node definition below, write a function that inserts a new node into an AVL tree that stores integers. This version of the function should not balance the tree. It should increment the height properly. Since you are not balancing the tree the return node is the same that is passed in unless it is passed a null value for node and it will create a new node and return it.

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

// Node *root = insertnb(NULL, 10);

// root = insertnb(root, 20);

// root = insertnb(root, 30);

// After the above code executes the tree will have the value 3 nodes all going to the right.




// Function Signature

// Node* insertnb(Node* node, int key);




// File Name 

// avl.cpp

// Score

// There are three tests each worth 2 points

// Note: You do not need to submit any other code including the main method or any print statements. ONLY the insertnb function is required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.