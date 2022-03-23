// Using the starting code below, write the push method for a 
// Stack class that stores integers in an array. If the caller 
// tries to push more data than the MAX constant then the function 
// sshould return false.

// Note: The class fields are public only so the grader can check 
// your code. In a real life implementation these should be private.

// Use this code to implement your method:

#define MAX 1000

class Stack
{
  public:
  int top;
  int a[MAX]; // Maximum size of Stack 
  Stack() { top = -1; }
  bool push(int x);
  int pop();
  int peek();
  bool isEmpty();
};

// Here is an example call to the function

// Stack mystack;
// mystack.push(10); 

// After the above code executes the stack will contain the number 10 
// and the top field will contain the value 0.

// Function Signature
// bool push(int x);

// File Name 
// stack.h

// Score
// There are three tests each worth 2 points
// Note: You do not need to submit any other code including the main method 
// or any print statements. ONLY the Stack class is required. Otherwise, 
// the autograder will fail and be unable to grade your code. (I.e., do 
// not include the above example in your code.) The above example should 
//be used to test your code but deleted or commented out upon submission.