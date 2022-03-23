# *strings* #

in order to use the string type you have to use string library 
#include <string>

The string is encoted with double  quotes.
- Formally double quotes is *not a class string type* its a *class c string type*
- cpp has default and implicit cast from a c string to the staring class. 
* we can also use a plus operator on strings. it concatinates the strings. 

- initilize (= operator)
- concatenating (+ operator)
- Reading from user

* cin limitation on reading string
- cin is desigined in a way that it skips leading whitespaces and stops at next white space
- if you need to read the entire line you have to use the other ways of reading. 
    - getline(cin, str);

- indexing: array can be seen as sequence of characters. so we can use the indexing in string simillar to arrays. 

- Slicing : to take the sub string out we use the sub str method. 
syntax: string_name.substr(3, 2)
Two parameters says: where the sub string starts and how long is the sub string. 

- length : calculate the length of the string. Gives number of character in the string. 
syntax: string_name.length()
Return : int(length_of_string)
* size() function can also be used it is the alias of length. 


####
Example : Write a program that reads the user's name and prints it in a reverse order. 

- comaring: ==, !=, <, >, <=, >=

- how do we compare the string
    - it does not compare on the basis of length
    - the cretria to comare the string is lexical order (i.e the words coming before and after in the string.)

    - cpp itrates on the charactes of the string simeltaneously and compare them contineously. 
    - if one string ends than it is concidered as the smaller string. 

####
Problem : write a program that reads from the user 3 worrds and prints the one that comes first in an alphabetical order. 

####
- Searching in the string: for example you have a string and if you want to find that does it contains a substring. 
    - string_name.find(substring_to_search)
    - it returns the starting index of the substring.
    - if substring is not there than it returns (string::npos)

    - if substring appears more than ones in the string. 
        - it returns where the first time appears the string we are searching for. 

    - str.find(substring_to_search, startIn)
        - it returns the index of first appearance of the substring after the index 3.

####
- Concatination: strings can also be concatinated using the append. *String in cpp is an object*. It contains functions that can perform certain operations on string.
    - syntax : string_name.append(string_to_append)
    - Return : the concatinated string. 
    - Difference append and "+" : append function is much faster.

####
- Passing and returning
C++ string objects are passed and returned by value by default. This results in a copy of the string object being created.

To save memory (and a possible call to the copy constructor), a string object is frequently passed by reference instead.