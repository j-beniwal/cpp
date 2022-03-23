// Description
// Modify your earlier implementation of the CSV import function so instead of 
// updating a two dimensional array it loads the data from the file into a linkedList.
// Use this definition for the nodes in the linked list:

// class NODE {
// public:
//   string firstname;
//   string lastname;
//   string email;
//   NODE* next;
// };

// Here is an example call to the function
// NODE* data = nullptr; 

// csv_import2(&data,”customers.csv”);

// After the above code executes the file contents would be in the linked list.  
// Contents should be added in order at the tail of the list.
// Function Signature
// void csv_import2(NODE** data, string filename);
// File Name 
// csvimport2.cpp
// Score
// There are five tests each worth 2 points

// Note: The csv input file will have 3 columns to match the NODE class. This is different from the previous implementation that passed the number of columns as a parameter. You do not need to submit any other code including the main method or any print statements. ONLY the csv_import2 function is required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.

