// AVL - Right Rotate Function Lab

// Description

// Using the node definition below, write a function that right rotates an AVL tree that stores integers. The node to the left becomes the parent, the node passed in becomes the right node. It should fix the height properly of the new and old parent nodes. The new parent should be returned from the rotation.

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

// Node *root = insertnb(NULL, 30);

// root = insertnb(root, 20);

// root = insertnb(root, 10);

// root = right_rotate(root);

// After the above code executes the tree will have 20 as the root node.




// Function Signature

// Node *right_rotate(Node *x) 





// File Name 

// avl.cpp

// Score

// There are three tests each worth 2 points


// Note: You do not need to submit any other code including the main method or any print statements. ONLY the right_rotate function is required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.