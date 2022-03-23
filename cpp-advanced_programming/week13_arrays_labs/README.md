Implement function maxinlst(lst), which returns the maximum value of the elements in the array.
For example, given an array lst: [-19, -3, 20, -1, 5, -25], the function
should return 20.

The name of the method should be maxinlst and the method should take two parameters.  The first parameter is the array of values to test.  The second parameter is the number of elements in the array. Here is an example call to the function
int lst[] = {-19, -3, 20, -1, 5, -25};
printf(“%i”,maxinlst(lst,6));
File Name 
maxinlst.cpp
Function Signature
int maxinlst(int lst[], int size);


Score
There are three tests each worth 2 points
Note: You do not need to submit any other code including  the main method or any print statements. ONLY the maxinlst function is required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.

## Passing array to the functions
return_element = function_name(arr_name)
* array is pssed by reference, and changes made in the array in the function are refelected in the main frame. 
returnType = function_name(arryType arr_name[]) 

#####
Implement function maxabsinlst(lst), which returns the maximum absolute
value of the elements in the array.
For example, given a array lst: [-19, -3, 20, -1, 0, -25], the function
should return 25.
The name of the method should be maxabsinlst and the method should take two parameters.  The first parameter is the array of values to test.  The second parameter is the number of elements in the array. Here is an example call to the function
int lst[] = {-19, -3, 20, -1, 5, -25};
printf(“%i”,maxabsinlst(lst,6));



Function Signature
int maxabsinlst(int lst[], int size);

File Name 
maxabsinlst.cpp
Score
There are three tests each worth 2 points
Note: You do not need to submit any other code including  the main method or any print statements. ONLY the maxabsinlst function is required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.

#####
Implement function avgoflst(lst), which returns the average
value of the elements in the array.
For example, given a array lst: [19, 2, 20, 1, 0, 18], the function
should return 10.

The name of the method should be avgoflst and the method should take two parameters.  The first parameter is the array of values to test.  The second parameter is the number of elements in the array. Here is an example call to the function
int lst[] = {19, 2, 20, 1, 0, 18};
printf(“%3.0f”,avgoflst(lst,6));



Function Signature
float avgoflst(int lst[], int size);


File Name 
avgoflst.cpp
Score
There are three tests each worth 2 points
Note: You do not need to submit any other code including  the main method or any print statements. ONLY the avgoflst function is required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.
