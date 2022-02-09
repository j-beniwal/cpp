// AVL - Get Balance Function Lab

// Description

// Using the node definition below, write a function that returns the balance for a node of an AVL tree that stores integers. The balance is defined as the height of the left node minus the height of the right node. Zero should be returned if null is passed in.

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

// printf(“%i”,get_balance(root));

// After the above code will print 2.

// Function Signature

// Int get_balance(Node *x) 


// File Name 

// avl.cpp

// Score

// There are three tests each worth 2 points

// Note: You do not need to submit any other code including the main method or any print statements. ONLY the get_balance function is required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.