int is always of 4 bite
4 bites = 32 bits
negetive numbers are represented with 2's complement. 

Forms of data:
- constants
- variables 
    - c++ literals
        (integer values like 2, -3, 7.3, "abc". etc)
    - programmer defined
        (const int MAX = 5)

we can apply + - * on ints and get the ints
For division

/ div : gives questient 
% mod : gives remainder

Assignment operator:
= 
- computed the right side first and assigned to the left 

###############################
###### Float and Double #######

- used to store real numbers
    - real numbers ( have fractionl part)

double : 8 bytes (64 bits)
float  : 4 bytes (32 bits)

# storing floating point value
- fixed position
    first 4 bytes for the integer and last for the fractional part
- floating point representation

# cpp litrals for doubals and floats
- double example : 3.4, -8.23, 6.0 etc
- 6.0 is double not integer
- floats : 3.4f -8.34232f 6.0f 
- we add f at the last to represent that it is a float 
- Arthmetic operation
    - / will do the real division


#################################
###### combining variabls #######

- it is illegal to directly assign a different type of variable to other type. 

Stendard procedure is Casting.
- converting the representation of data from one type to the another type. 
eg 
int x1, x2;
float y1, y2;

type casting from int to float
y1 = (float)x1;
y2 = (float)6;
x2 = (int)6.7; // converts the 6.7 to int

- Operations on different data types
cout<< 5 / 2;       // int by int => int 2
cout<< 5.0 / 2.0    // float by float => float 2.5
cout<< 5.0 / 2      // float by int   => float 2.5           (compiler will do implicit cast (convert the required varialbe into the required data type) where we don't loose the data)

- operations on different data types with assignments.
int x1;
double y1;

x1 = 5/2; // int to int gets int 2 
y1 = 5/2; // int to int gets int but assigned to float (implicit cast) get float 2.0

* always right side expression is calculated first and than assigned to the left side. if required implicit cast is done. 

#############################
###### char data type #######

Kind of data : characters 
Inner representation 
- mapping of numbers to the letters. 
each char data consumes 1 byte i.e 8 bits. 
2^8 = 256 different valus 
The numbers and values are mpped with ASCI table. 
eg 'a' = 97 (01100001)

C++ build in literals
- constants of value char 
- for that we use '' eg char ch = 'r';
- Do not use double quotes: double quotes are for the string.

char Literals
- special syntax for the escape charachters 
- eg 
    - newline '\n'
    - tab     '\t'
    - backslas singl '\\'

- Arthematic operators for the characters. 
adding integers to the asic value of the character can get you the next character. 

####################
###### string ######
string is not a c++ build in type 
to use it we have to use
#inclue <string>

Kind of data : string/text
Inner representation : Sequence of characters
C++ literals : "abc", "this is an string \n"
Arithmatic Operators: 
- + : concatination of strings
- = : assignment 

###################
##### Bool ########
bool is short for boolean
Kind of data : Truth/value (True/Fasle)
Internal representation : each bool is 1 byte long (8 bits)
False : 0000 0000
True : anything except (0000 0000)
C++ literals : true, false
Bolean Operator : 
- Not (uneary operator) (notation : !)
- And (binary operator) (notation : &&)
- Or  (binary operator) (notation : ||) (it is a inclusive or where any one of them true makes the result true)


#########################
###### Expressions ######

IO expressions 
- (cin and cout : data input and output for user intraction)

Arithmatic Expressions 
- (operated on int float double and gives back int float double) (operated on char and string as well, char gives the asici value, string gives the concatenated value)

Boolean Expressions (gives the boolean output )
- Atomic Boolean Expressions
    - The bool litrals - true, false
    - eg b = ture;
    - arithmatic expressions combined with relational operators (<. >, <=, >=, ==, !=)


- compound Boolean Expressions
    - single boolean expression combined with boolean operators( !, &&, || )
    - eg   b = true && (true && !b)

