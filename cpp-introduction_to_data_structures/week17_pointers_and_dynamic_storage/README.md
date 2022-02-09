## *Pointers and Dynamic Storage* #

Why Pointers?
* A way to store a "reference" to an object.
    - poointer can point to.
        1. a stack variable. 
        2. a heap dynamic variable. 
* A way to store large amount of information not associated with a function (the heap)
    - When we start a function all of the stack dynamic variables are allocated. 
    - When that function ends all th the stack dynamic variables are de-allocated. 
    - What if we want a variable that existed without a function being called. we want that variable to continue to exist even after the function ends. we can create those variables on heap. But variable on the heap does not have a name, the only way to access that is to have a pointer to that variable. 
* A way to link objects together. 

What it looks like?
* In c++ a pointer must specify tha datatype that it points to. 
    - it stores a address, but cpp does not allow a integer pointer to points to a double or anything else.
    - stored number represents the memory address to the item that's being pointed to. 
    - We can create pointers with construct below. 
        int *pointer_name;
    - when we declare pointer it is pointing to garbage. 
* In main memory, the pointer is simply a stored number 
* The stored number represents the memory address of the item being pointed to. 

Getting pointers to point. 
* Pointer can be made to point to something. 
* The address of the item being pointed to is stored in the pointer. 
* We can get the address of the item by using the "address-of" operator, the ampersand "&", in front of the variable's name. 
    - the varable need to be existing. 
    Example code
    int x = 100;
    int * ptr;
    ptr = &x;

Accessing data From a Pointer. 
* Pointer would be pretty useless if all they could do was point. 
* We can access the data that a pointer is pointing to by "dereferencing" the pointer. We do that by dereferencing operator "*". 
    - example it a sign board on the highway which you follow to reach the destination. 
    Example code
    int x = 100;    // create a variable of type int and assign value to it. 
    int *ptr;       // create a pointer which can point to a int.
    ptr = &x;       // pointer ptr starts pointing to x
    cout<<*ptr;     // dereference the address to which the pointer is pointing and get the value. 
    *ptr = 20;      // dereference the value to which the pointer ptr is poining and store 20 at that location

What if a Pointer dosen't point to anything?
* pointers always point to something. 
    - when we create a pointer it has garbage value. 
* if a pointer is not pointing to something valid, it should point to NULL or nullptr.

Defining Multiple Pointers
* when defining the pointers, the star "*" is associated with only the next item in the sequence, If you need multiple pointers in the same line you need more stars. 
    Example code
    int *ptr1, x;       // one pointer and one int
    int *ptr2, *ptr3;   // two pointers 

Let's Get Dynamic
* Pointers wouldn't be much use if they could only point to the objects that were created already!
    - Pointer are very useful for creating heap - dynamic memory or allocating heap dynamic memory and having a pointer point to that heap dynamic memory. 
* Pointers can point to heap dynamic memory.
* Heap Dynamic memory is allocated when you ask for it, and remains allocated until you destroy it. 
    - it has no name. 
    - so we has to use the pointers to access that. 
* This means it can survive function calls. 
* You have to be very careful to destroy it after you're done, it is not destroyed automatically. 
    - if you loose the track of the pointer pointing that memory you don't have any track and this is called memory leake. 
    - Example we can have a function call and use variables in that function from heap dynamic memory using the pointer, if the function ends the memory still remains and can be accessd to another functions. 

Well That's new 
* A variable can be created on the heap for a perticular datatype, but it does not have a name. 
* If it doesn't have a name how do you refer to it? .... pointers!
* Once the memory is allocated on the heap, it will not be deallocated until you do it, or the programm ends. 
* If you loose track of a head-dynamic variable, it becomes *garbage on the heap* aka a "*memory leak.*"
* Creating a new variable.
    Example code
    int *ptr = new int; // creates a pointer which can point to int, point it to a location in heap which can store int. // new int returns the address of memory location in the heap and you hve to store that someware and you do it with the help of pointers. 
* You access data on the heap through dereference operagor. 

For Every new there must be delete. 
* If memory is allocated it must be destroyed
* You must destroy it once and only once. 
    - forgotting to delete will result in memory leak. 
    - Deleting it twice results in "double delete", which will crash the programm. 
    - when you delete a heap dynamic memory when you own it and after deleting you return it back to OS. deleting it second time is you asking for that memory again by you don't own that memory any more so it is illeagal operation.    
    Example Code
    delete ptr; // returns the memory that was referenced by pointer ptr, but pointer still contains the address hance poining to the memory location. 
    ptr = NULL; // pointer pointing to null.
* Deleting NULL or nullptr has no effect. 
* As a best practice follow delete operation by assing NULL/nullptr to the pointer. That will reduce the chance of the error of second delete. 

What about Array?
* Heap-dynamic arrays dosn't have to have a static size. // size of stack dynamic array has to be static.
* Once created, heap dynamic arrays can't grow, but they can be created to be any size initially 
* Since we are working with the pointers, a new, large heap-dynamic array can be made to replace the smaller one. 
* Deleting a heap dynamic array is bit different.
    Example code
    int x;
    cout<<"How big ?";
    cin >> x;
    int * arr = new int[x];
    detete [] arr;
    arr = NULL;

What can we do with heap dynamic arrays?
* heap dynamic arrays are not different than the "normal" arrays which we has been using. 
* use heap-dyanamic arrays just like all other arrays, using the square-brackets operator. 
* You can also use the pointer arithmetic 

Pointer Arithmetic
* C++ allows pointers to be manipulated using simple math operators.
* Use the addition pointer ("+") to move the pointer forward some number of spaces (x = x + 5 will make the pointer point to 5 elements higher in the array)
* Use the subtraction operator to move the pointer backwords. 
    - cpp deduces the type it is pointing to and it moves forward and backword element wise. 
    - example for an integer arry if you add +1 to the pointer then it moves ahead 4 bytes to point to next element. 
* But if we change the pointer to array by adding or subtracting something, than the indexing of the elements chagne, if we move up by +5 then the the 5th element becmes the zeroth element. 


Want to increase the size of Arry, Someone did it already for you. 
* Of course, c++ has something called the "Standard Template Liberary".
* The STL contains a data type known as "vector".
* A vactor is a dynamicaly growing array, in which you don't need to worry about the size, it will tell you even how many items are in it. 
* Sample code for using vactor.
    in vector.cpp

But Wait ........ There's more!
* A capablity was added to c++ in 2011 and it is called ranged for loop.
* Vectors allow us to access all of the elements by using a "ranged for loop"
* The syntax is a bit strange (it was borrowed from other language and brought into cpp later.)
    Code
    for (int i : v)
        cout<< i << endl;

    // while running the programm use -std=c++11 as the command line argument. 


Conclusion
Do practice and go through the material again and again.