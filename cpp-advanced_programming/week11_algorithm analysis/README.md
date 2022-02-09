# algorithm analysis 
Parimality Testing

Example: how to define a prime
define: a number >=2 be an integer. is prime, if its only divisior are 1 and num. 

Complementary divisors
Let num>=2 be an integer, and let d and k be two divisors of num. We say that k and d are complementary divisiors of num, if d*k = num
example for 100
4, 25 are complementary divisiors
5, 20 are complementary divisiors

# Suggested 3 methods 
version 1: we itrate from 1 to n.
version 2: we itrate from 1 to num/2.
version 3: we itrate from 1 to sqrt(num).

Analyse the resources rquirements and running time. 

T1(n) = 5n + 4 = O(n)

T2(n) = 3n + 4 = O(n)

T3(n) = 6*sqrt(n) + 4 = O(sqrt(n))

Observation for runtime.
* the running time dpends on the sie of the input. 
    - parameterize running time by the size of the input. 

let n be the size of the input(n = num) 

* the running time depends on the operators we use and on the types of the data they are applied on. 
    - ignore machine-dependent constants. we count each primitive operation as 1.

We compare the *number of primitive operations* executed by a process, *as a function of its input size*. 

The running time depends on the machine's hardware technology. 

Make asymptotic analysis: look at the groth of T(n).

* we compare the *asymptotic order* of the number of *primitive operations* executed by a process, *as a function of its input size*. 

T(n) = 3n^2 + 6n - 15 = O(n^2)

Rule of thumb to get the order of growth:
- drop low-order terms. 
- ignore leading constants.

# Definition of theta O
Let f(n) and g(n) be two function mapping positive integerts to positive real numbers. 

We say that f(n) = O(g(n)) if there exist positive real constants C1, C2 and a positive integer constant n0 such that C2g(n) <= f(n) <= c1g(n) for all n>= n0

# remember
1 + 2 + 3 + 4 + ...... is half of the n^2

We will be using this result a lot. 

Triangle is the half of the square = only the difference is the constant. 

