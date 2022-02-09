#########################
### switch statement ####

switch (numeric-expression){
    case constant:
        .....
        .....
        break;
    case constant:
        ....
        ..
        break;
    .
    .
    default:
        ...
        ..
        break;

}

Switch statement syntastic note.

- The (numeric-expression) must be type int (short int, int or long int), char or bool.
- The case labels must be constants (litrals or named constants)
- if no case lable matches the value of numeric-expression, control branches to the default label if there is no default label than control passes to the statement following the entire switch statement. 
- after a branch is taken, control proceeds sequentialy until eithre break or end of the switch statement occures. That is why there is a break statement at the end of each branch 



###############################
##### short hand if else ######

There is also a short-hand if else, which is known as the ternary operator because it consists of three operands. It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:

variable = (condition) ? expressionTrue : expressionFalse;

###############################
Write a program that inputs two grades separated by a space.  
If both grades are below a score of sixty then the program should output the message:
Student Failed:(
If both grades are greater than or equal to ninety five then the program should output the message:
Student Graduated with Honors:)
Otherwise the program should output the message:
Student Graduated!



For example, an execution could look like this:

Please enter 2 grades, separated by a space: 59 95
Student Graduated!
File Name 
gradeclass.cpp
Score
There are five tests each worth 2 points

###############################
Write a program that inputs four numbers separated by spaces.  The program should count how many odd and even numbers there are. The program should then output one of three possibilities depending on how many even and odd numbers are entered:
more evens
more odds
same number of evens and odds
For example, an execution could look like this:

Please enter 4 positive integers, separated by a space: 
 2 3 5 7
more odds
File Name 
countoddeven.cpp
Score
There are five tests each worth 2 points

###############################
Write a program for determining if a year is a leap year. In the Gregorian calendar
system you can check if it is a leaper if it is divisible by 4 but not by 100 unless it is also divisible by 400.

For example, 1896, 1904, and 2000 were leap years but 1900 was not.
Write a program that takes in a year as input (as a command line argument) and prints the string "{year} was a leap year'' if true and "{year} was not a leap year'' if false.
Note: background on leap year https://en.wikipedia.org/wiki/Leap_year

Here is a possible example call to the program
.\isleapyearc 1896
output:
1896 was a leap year
Here is a negative example call to the program
.\isleapyearc 1897
output:
1897 was not a leap year
File Name 
isleapyearc.cpp