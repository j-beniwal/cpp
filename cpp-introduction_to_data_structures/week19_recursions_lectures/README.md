# Week 19 - Recursions/Recursions Lectures

# Recursions Part I
Mathematica Induction Overview.
* Mathemtical induction is a technique to prove a statement
* it is used to prove universal statements. 
* For example "P(n) is true for any natural number n".
* There are two steps in such proofs. 
    - 1. Base case: we prove that P(1) is true.
    - 2. Inductive step. 
        - we show that for any n>=2, P(n-1) -> P(n).
        - (That is we assume that P(n-1) is true, and under this assumption, we show that P(n) is true)

    We proved:              Conclusion:
    P(1)                    P(1)
    P(1)->P(2)              P(2)
    P(2)->P(3)              P(3)
    P(3)->P(4)              P(4)
    ...                     ..

Strong induction overview.
* Strong induction is the variation of the previous technique
* It is also used to prove the universal statements:
    "P(n) is true for any natural number n".
* There are two steps in such process:
    - 1. Base case: we prove P(1) is ture.
    - 2. Inductive Step.: we show that for any n>=2, 
        [P(k) is true for all k<n ] -> P(n)
        (That is we assume that for any k<n, P(k) is ture, and under this assumption we show that P(n) is ture.)

We proved:              Conclusion:
P(1)                    P(1)
P(1)->P(2)              P(2)
[P(1)&P(2)]->P(3)       P(3)
[P(1)&P(2)&P(3)]->P(4)  P(4)
...                     ..
.                       .

# Recursions Part 2
What is Recursion?
* computer science defination:
    - A problem solving technique, "*closely related to the mathematical induction*" where we define a solution as a *combination of solutions to smaller instances of the same problem*.
    - simillar to MI as we prove on smaller values and assume that it is true for larger values as well. 

Developing a recursive Algorithm
* when we design recursive algorithms simiilar to MI it has to steps.
    - Step 1: The base case
        Solve the problem for smallest possible input. 

    - Step 2: The recursive step.
        * Define the recursive hypothesis - 
          Asumint that when calling the function on samller input it does it's job. 
        * Based on this assumption, find how to combine calls to smaller instances, in order to solve the    problem for the given input. 

* Step 1. The Base Case
    - Solve the problem for the smallest possible input. 
  Step 2. The recursive step
    - Define the inductive hypothesis:
        Assume that when calling the function on a smaller input it does it's job. 
    - Based on this assumption, find how to combine calls to smaller instances, in order to solve the problem for given input. 

# Recursions Part 3
Example Factorial : factorial.cpp
