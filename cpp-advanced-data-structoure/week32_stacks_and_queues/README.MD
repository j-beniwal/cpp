# Stacks and ques intro
In this module
Stacks
- What it is 
- How it works 
- How it's designed
- What its uded for 

Queues
- What it is 
- How it works 
- How it's designed
- What its uded for 

#############
### Stack ###
#############

- Uderstanding: like a stack of plates in the begining of buffet. 
- all you can grab is the top plate.
- You have access to the only top element. 
- You can't access random elements. 
- Last In, First Out (First In, Last out) FILO or LIFO.
- Accessor functions are useally "push" "pop" and "top".
- Supplemental functions
    - clear
    - isEmpty
    - size

Stack, How it works?
- Push simply add to the front.
- Pop simply removes from the front. 
- Supplemental function need to be provided as well as Big 3, if applicable. 
- Big 3 need to be implemented if we are using an array.
- Here we will be using STL list class which have all three build. 

Stack storage.
- Comparision of storage methods. 
- Fundamental Data structure which we have as options
            - List                          - Array
            * linked list                   * sequential storage
    Push      O(1)                            O(1)/O(n)
    Pop       O(1)                            O(1)
    Clear     O(n)                            O(1)
    isEmpty   O(1)                            O(1)
    size      O(1)                            O(1)

- Since we see push will happen more opten then clear the list makes considerably 
  more sense to use than array. 

- We will use build-in STL list class. 
    - Push will call push_front
    - Pop will call pop_front
    - Other functions will be mapped to equivalent STL functions. 

Stack What is it used for?
- Compiler is the fundametal component of Computer science. 
- Compilers uses a lot of stack. 
- one of the use of stack in compiler is pattern matching. 
- for example opening braces and closing braces
    - need to be matched both in count as well as order. ([{ matches }])
    - when open is encountered it is pushed
    - when close is encountered it is compared to open at the top and if a match, the top
      is popped. 
- Math Infix to post-fix conversion. 
- Math post-fix to value conversion

#############
### queue ###
#############

Queue, what is it.
- First in, First out (FIFO) data structure. 
- First item that is enqueued is first item dequed. 
- Often used for buggering information. 
- Push pop and top are often the accessor functions however it may be enqueue dequeue and 
  top. 
- Sumplemental function 
    - clear
    - empty
    - size

Queue how it works
- Enqueue adds to the end
- Dequeue removes from the front. 
- could be reverse(vice-versa)
- Supliment functions need to be provided
  as well as big 3 if applicable. 

Queue Storage
                Link List               Array
    Push        O(1)                    O(1)/O(n)
    Pop         O(1)                    O(n)
    top         O(1)                    O(1)
    clear       O(n)                    O(1)
    isEmpty     O(1)                    O(1)
    size        O(1)                    O(1)

Queue implement
- Much more obvious that we will use a List
- Similar implementation as stack with minor changes. 
    - enqueue will add to the end of the queue
    - dequeue will remove from the front of the queue. 
    - Necessary to make sure that list has both head and tail pointer. 

What queue is used for?
- Storage buffer (io input, keyboard program etc)
- Anywhere that we need an ordered list with First in, First out properties.
