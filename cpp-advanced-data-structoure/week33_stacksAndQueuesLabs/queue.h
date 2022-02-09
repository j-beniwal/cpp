// Description

// Using the started code below, write the enqueue method for a Queue class that stores an integer in an array. If the caller tries to enqueue more data than the MAX constant then the method should return false.

// Note: The class fields are public only so the grader can check your code. In a real life implementation these should be private.

// Use this code to implement your method:

// #define MAX 1000

// class Queue {
//   public:
//     int rear_value;
//     int a[MAX]; // Maximum size of Queue
//     Queue() { rear_value = -1; }
//     bool enqueue(int x);
//     int dequeue();
//     int front();
//     int rear();
// };

// Here is an example call to the function

// Queue myqueue;

// myqueue.enqueue(10); 

// After the above code executes the Queue will contain the number 10 and the rear field will contain the value 0.

// Function Signature

// bool enqueue(int x);

// File Name 

// queue.h

// Score

// There are three tests each worth 2 points

// Note: You do not need to submit any other code including the main method or any print statements. ONLY the Queue class is required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.

