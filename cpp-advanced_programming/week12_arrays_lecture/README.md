## *Arrays Lecture*

First data structure in cpp

Computing the average (Revisited)
 
Write a program that reads grades of students in a class, prints the average and the grades that are above average. 

Example : enter the number of students in class

We need to store the grades.
for that we need some data structure i.e where we can store the data as a single entity. 

# properties of array
- elements are stored continuously in the memory.
- All of the elements in an array are of the same type. 
- The elements are accessed using a 0-based index system.

(address of arr[i]) = (address arr begins) + i(size of the element)

# Syntatic Notes
Static arry syntax: 
1. Arry's physical size *must be a constant*. (must be known duing compile time) and *must be given at declaration.*

Can be done
int arr[6];
const int x = 7;
int arr[x];

Can't be done.
int arr[];
int n =7;
int arr[n];

## import points
* Array's name is a legal C++ expresion.
    cout<<arr
    It's value is the address in the memory where the array starts. 

* Initialization of arry (at declaration)
int arr[6];
arr[0] = 5;

int arr[6] = {2, 3, 5, 6, 2, 12}
// if you give the input less than the size then they are populated in the start and rest are zeros. 
#illegal
int arr[6]
arr = {3, 4, 12, 53, 64, 12}