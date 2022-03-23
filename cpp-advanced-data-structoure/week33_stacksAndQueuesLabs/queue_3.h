// Description

// Using the starting code below, write the dequeue method for a Queue class that returns the front integer in the Queue and removes it from the Queue. If there is no data on the Queue the dequeue method should return 0. You need to have a working enqueue method in your Queue so please make sure you have successfully completed the earlier assignments.

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

// printf(“%i”,myqueue.dequeue());

// After the above code executes the Queue will be empty and the rear_value field will contain the value -1. The number 10 will have been printed on the screen.

// Function Signature

// Int dequeue();

// File Name 

// queue.h

// Score

// There are three tests each worth 2 points

// Note: You do not need to submit any other code including the main method or any print statements. ONLY the Queue class is required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.