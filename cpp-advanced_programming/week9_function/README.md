*Functions*

K-combination problem
let k and n be two non-negetive integers such that k<=n
How many combination of k we can get from the n.

nCk = (n!)/(k!*(n-k)) it is read as n choose k. 

######
Writing functions need follwoing things:
- function name: give a readable name to the function.
- function input: define if the function need any inputs, if they do then mention the inputs.
- function return: return the value once the function is executed sucessfully.

#####
How the functions are Executed.
- Functions are executed using the runtime stack model.
- in excution model first all the variables are created declared in the code.
    1. When the function is called a frame is created.
        - a frame stores the variables and return address.
    2. Evaluate the arguments passed to the function.
    3. Associating the arguments with the perameters.
    4. jump to the begining of the excution of the code.
    7. The function is executed.
    8. Return statement
        - First evaluate the return value.
        - Second eveluate the return address.
        - pop out the current frame and jup to the return value.
    9. Assign the return value to the variable.

When we are done executing all the lines we pop out the main frame and return to operationg sustem.  

** when we are in the function block the only variables we can access are the function frame variables. 

Compilation process:
- Compiler reads the code line by line and intrepets it. 
- so for defining functions we can do 2 things
    - define the function before teh main function. (but this becomes compleacted as the programms become comples and function callback is rendom.)
    - add function declearation before the main function.


#####
Advantages of declearing function
- made code more clear and redable.
- reuse the function.

#####
Variable scope
The scope of variable in a function is in that function only. 
For deep explanation we can use the execution model.

- when a function is called 
    - a frame is created.
    - that frame contains the new variable. 
    - if we change the value of variable in that function than the value changes only in that frame.
    - when execution is complete that frame is popped out and no more contains the value.
    - the original value of the variable in the main remains same.
    - as we don't change the value in the main function frame.

Each function has its local frame and we have only access to that frame variables. We can't access the variables out of that local frame. 

#####
How to change the values of the variable in the main
#Parameter Passing.
Two ways to pass the parameters to a function:
- Call by Value
    Syntax : void func( int x)
    Semantics: When passing by value, the argument is evaluated and its value is passed. 
- Call by Reference
    Syntax : void func ( int & x)
    Semantics: When passing by reference, a reference to the argument's memory location is passed. 

#Program execution for call by reference
1. main frame we have variables with the value
2. Call for the swap with reference
3. We create a frame with variable and return address. 
4. In this case when we call by the reference so in the frame the variable a and b contains the references to the main. 
5. Now the a and b in the frame have access to the main variable. 
6. Now any changes making in the function will effect the reference hance effecting the main varialbes. 
7. when the function execution is complete the function frame popes out but this time we got the changed variables in main. 

#####
Function Overloading
With function overloading, multiple functions can have the same name with different parameters:
int myFunction(int x)
float myFunction(float x)
double myFunction(double x, double y)

#####
#Analyze Digits
Function gives the number of digts and the sum of the digits. 

** when we have to return or update multiple values from the function we can use call by reference. 
** where we can use call by reference for updating the sum and return for updating the count. 

#####
#Solving Quadratic Equations.
Write a program with which accepts 3 real numbers i.e the cofficents of the quadratic equation, then prints the solution of the equation if there are any or any appropriate message. 