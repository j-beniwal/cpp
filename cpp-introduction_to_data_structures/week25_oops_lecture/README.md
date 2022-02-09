# object oriented programming

# object oriented Programming Lecture

In this module
- Defination of object and class
- The Concept of encapsulation
- The createion of a class
- Enforcing protections and access
- Accessors/Mutators and const
- How To guarantee proper creation
- using operators on classes
- Classes that contain dynamic memory
- Inheritance
- Polymorphism/ Dynamic binding.

Object orientation
- A concept which came about in the early 1980s to bring together data and functions
  that operate on the data. 
- Creates, in code, an idea which exists in real life. 
- Protects the data from outside changes
- Allows for multiple operations to be performed with a single atomic function call
- Enforces the idea that the designer knkows best about what to do, and not to do,
  to the data

Class vs. Object
- A class is a framework which is used bo build multiple objects which are similar.
- House blue print: class (its a framework and is used to build object around, tells about what is going to be inside the class but don't tells what the values are )
- Object is the instance of the class (The house created from the blueprint with different designs.) 
  it's a class instanciated     
- Cookie cutter example: the cookie cutter is a class and the cookies created from it is a object.  
- We dont live in the blueprint or eat the cookie cutter, we live in the house created from the blueprint
  or cookie created from the cookie cutter. 

Encapsulation
- The idea that code written as part of the class has greater access than code which
  is not part of the class.
  For example main: main shouldn't have access to the code in the class which creater don't want .   
- Allows for a level of protection so that programmers not involed in the creation 
  of the class will not have access to certain items in the class which need protection. 
  For example : 
  1. The architect creates a house Bluprint and can change anything in that. 
  2. The House contains (Room locations, dimensions etc)
  3. The architect can change anything in the blueprint but the plumber can only
     access but not modify. 
  So with class we can expose certain part of class and protectect the other. 

Creating a class
- A class is an abstract datatype
    - used for creating a more complex datatype by combining simpler data types
      and adding capablity. 
- In C++ the keyword "class" is used. 
- For example creating a date class, a "Date" in reality is three integers, a day, month and year. 
  class Date{
        public:
        int day;
        int month;
        int year;
  };

  example: birthday has the values day, month and year. making them together gives your birthday. 
           so that is where the idea of encapsulation comes. 

Enforcing protection
- while the privious code showed a simplistic view of a class, we know that day is an
  integer which means its value could be -2.1 billion to positive 2.1 billion! Not 1 to 31! 
- Rather than allow uncontrolled (public) access to our data, we should protect our 
  data as follows.

  * (note) private is the DEFAULT for classes!

  Code snippit:
  class Date{
      private:
        int day;
        int month;
        int year;
  };

  now by making them private nobody has the access and nobody can change the value. 

Accessors and Mutators (getters and setters)
- Unfortunatly, that dosen't work because now we can't access ANY of the variables.
- We need some functions to help us.
- Accessors are used to get information out of the calass. 
- Mutators can change the data. (put the data in class)
- We can restrict the values. controlled values. 
  Code snippit:

  we create 3 functions which act as mutators here. setDate, setMonth and setYear.

  We have defined setYear inside the class. 
  setDate and setMonth defined outside the class.

  There is no defference in defining the functions inside and outside the class. 
  but as a best practice we write minimal code inside the class. 

  Here all three functions are the members of the class so they have access to all
  the private information (idea of encapsulation: members have access to the private 
  information inside the calss)

  To define the functions outside the class we need scope resolution operators. 

  class Date{
      private:
        int day;
        int month;
        int year;
      public:
        void setDate(int newDay);
        void setMonth(int newMonth);
        void setYear(int newYear) {
          year = newYear;
        }
  };

  void Date::setDay(int newDay){
      if (newDay > 0 && newDay <= 31)
        day = newDay;
  }

  void Date::setMonth(int newMonth){
      if (newMonth > 0 && newMonth <= 12)
        month = newMonth;
  }

  so with the help of the mutators we can change the data. 

- Now we can change the data, but not access it. 
- If we are not changing the data, we should warn c++ that we will not be making changes
  by marking the function as const. 
- Const member functions cannot change data and are the only functions that can be called
  if the object is const.
- For const the object from start of the function to the end of the function would not change.
- It's a protection machenism to make sure that we don't accedently make any mistake by changing 
  the variables.

  Things to take care while defining the member functions as const. 

  * if an object is const defined the only functions we can call are the const defined functions.    


Other userful functions
- Perhaps we could add a printDate function to print a formatted date. 
  Example:
  void displayDate() const{ cout<< day << "/" << mont<< "/" <<year;}

- Or a validate function to check if the date is valid. 
  bool validate() const;

- The above might require a leap year calculation which could be a private function inside date.

- The possibilities are endless!

Creating and working with an object. 
- You can create an object just like any other datatype 
- Working with an object requires the "Dot operator"
- Remember, you will NOT have access to private!

  Example snippet:

  int main(){
    Date d1;
    d1.setDay(6);
    d1.setMonth(8);
    d1.setYear(1991);

    cout<<"Very Important date: ";
    d1.displayDate();
  }

Constructor
- What are the value of the variables immidately after the construction of the object. 
- If we just create an object, its data members would be garbage values.  
- Object orientation means knowing that we will NEVER have invalid values, even if it 
  was just created. 
- So C++ provides for constructors which are functions that are automatically called when
  the object is created. 
- The default constructor is a function named exactly the same as the name of the class
  (case sensitive) with no return type (not void, nothing) and no parameters. 

Constructor parts
  Sample code 

  * member initialization list
  class Date{
    private: 
      int day;
      int month;
      int year;
    public:
      Date() :day(1), month(1), year(1970){}
  }

  * inside the code without member initialization list. 

  class Date{
    private:
      int day;
      int month;
      int year;
    public:
      Date(){
        day = 1;
        month = 1;
        year = 1970;
      }
  }

More Constructors
- A constructor that takes three ints?

  Date(int newD, int newM, int newY): day(newD), month(newM), year(newY){}

- Now we can do

  int main(){
    Date d2(6, 8, 1991);
  }

- Create as many constructors as you would like, each must have a unique set of parameters. 


An Important Pointer
- Every object has a pointer, which looks like a data member, called "this"
- The "this" pointer points to the calling object. 
- Though not necessary, you can always use this 
  void setYear(int newYear){ this -> year = newYear;}

  Some times "this" will be needed
    - If a person has a spouce pointer, and gets married, the person's spouce 
    pointer should point to the new spouce but where does the spouse's spouce pointer point?
    it should point to this. 

Operator Overloading
- Operators are just functions with an strange function call
  - a+b is actually a function call to either:
    - operator+(a,b)
    - a.operator+(b)
  - Operator functions can be member or non-member
-Some operators can change the data in an object, some return a new object

Operator Restrictions
- Some operators cannot be overloaded
  - .
  - :: (scope resolution)
  - *. (dereference and member select)
  - sizeof
  - ?: (turnery operator)
- Some can only be overloaded as a member
  - = (the assignement operator)
  - [] (the array-index of operaotr)
- Some, almost, cannot to be overloaded as a member
  - <<
  - >>

Choosing Member vs Non-member
- Remember that members have access to private
- A function defined as a "friend" in the class is NOT a member, 
  but will have access to private
- Otherwise, there is only one difference
  - a+b will work in either case
  - a+5 (object + constant) will work if there is a constructor which 
    can take 5 and construct an other to add to a
  - 5+a (constant + object) will only work if the above constructor exists
    AND operator+ is a non-member. 


What To return?
- The value returned depends on what the operator should do
- the return data type depends on what is being returned
  - if the item being returned was created inside the function, return MUST be by value
  - If the item was passed in as a parameter, or you are returning the "this" pointer,
    you can return by reference
- Returng by reference is prefered. 

An Odd Case
- Because C++ has both a pre- and post- increment operator, we need a special case
  to defferentiate
  - The pre increment operator will change the value and then return a reference to 
    existing object
        Date& operator++();
  - The ppost-increment operator will copy the object, then change the value and return
    the copy 
        Date operator++(int);
  - Because we need to differentiate, the post-increment is passed as int.
  - The int passed has no bearing on the operator, its just a way to differentiate.

Classes that contain dynamic memory
- All classes have an assignment operator and constructor which can copy an existing object,
  this is alef-over of C's structs and is useful.
- Unfortunately, when pointers are involved, the built-in operators copy the pointer and not
  what the pointer are pointing to
- This is known as a shallow copy and would be problematic if left alone. 

Example
  class Thing{
    int * value;
    public:
      Thing(int newVal = 0) : value(new int (newval)){}
  };

  int main(){
    Thing one(1);
    Thing two(2);

    one = two; // it made one to point to the same location as two
              // that is copied the address. 
              // and one memory is a memory leake. 
  }


  Three problem, Big 3 Solution
  - Copy operations need to copy the data, not the pointers
  - Since we are creating memory in the constructor, we need to destroy the memory
    when the object falls out of scope.
  - The Big 3 are three functions that, if you need any of them, you need them all
    - Destructor - Called automatically when the object falls out of scope
    - Copy Constructor - Constructs an object based on an existing one
    - Assignment Operator - Copies one object to another (deep copy)
      - Be careful of avoiding x=x (self assignment use:
        "if(this=&rhs)" to avoid)

  Code

  class Thing{
    int * value;
    public:
      Thing(int newVal = 0) :value(new int (newVal)){}
      ~Thing(){ delete value; } //destructor
      Thing(const Thing& rhs) {value = new int(*rhs.value);}
      // copy constructor
      Thing& operator = (const Thing& rhs){ *value = *rhs.value;}
      // Assignment op
  }

Inheritance   
- During inheritance, the existing class, called a base class is enlarged to
  form a derived class
- All items (functions and data) which exist in the base class will be in the 
  derived class automatically
- The derived class can create new versions of existing functions, this is 
  called overriding
- This does not change private access, the derived class cannot access private!


Pets and Cats

  Example

  class Pet{  // base calss
      string name;
      int petID;
    Public:
      Pet(int newID = 0) {petID = newID;}
      string getName() const {return name;}
      void setName (string newName) {name = newName;}
      void speak() const{}
  };
  class Cat : public Pet {  // Cat Is-A pet // Derived class
      double wiskerLength;
    public:
      Cat() :Pet(10000){} // explicit call to BASE constructor. 
      void speak() const {cout << "MEOW!" << endl;}
      void setLength (double newLength);
      double getLength() const{return whisterLength;}
      void setName(string newName);
      Cat& operator = (const Pet&);
  }

  What if we need to override?
  - To override, you just create a function in the derived with the 
    same name and parameters as in the base.
  - If you need to call the base version of the function, 
    use the scop-resolution operator "::"

    Example

    void Cat::setName(string newName){
      whiskerLength = 0;
      Pet::setName(newName);
    }

What if derived SHOULD access base's stuff?
- C++ adds a protection mechanism to allow for a condition where a derived
  class should access a base member's item
- Items listed as "protected" in base can be accessed from derived
- This should be used sparingly

Polymorphism
- Since every cat is a pet, we should be able to copy data between cats and pets. 
- Since every cat is a pet, every cat will contain all of the functions inside pet.
  - Though not, necessarily the same versions. 


Code

int main(){
    Pet p;
    Pet* pptr;
    Cat c;
    Cat* cptr;
    p = c;  //Always allowed
    c = p;  // Allowed if operator = (const Pet&) is overloaded;
    pptr = &c;  // Always allowed, polymorphism
    cptr = &p;  // NEVER ALLOWED!
}

Polymorphism
- Polymorphism in c++ allows us to copy data from a derived class into a base class,
  but only the base items will copy over (slicing).
- Overloading the assignment operator can allow us to copy from a base class into 
  a derived object (overloading)
- Since every derived object contains everything in base, a base pointer can point 
  to a derived object (polymorphism)
- (there is no guarantee that base contains eveything in derived so a derived pointer
  can NEVER point to a base object)

Virtual Functions
- If a vase pointer is used to point to a derived object, by default, the functions 
  called will be the BASE versions of the functions.
    - This can be catastrophic if the derived function does something different than
      the base
- The solution is to mark the base function as "virtual"
  - This employs late (aka dynamic) binding
  - The version of the function called depends on the type of object, not the type 
    of pointer. 

Pure virtual
- If the base class should contain a function, but doesn't know what the function 
  should actually do, the function can be marked as pure virtual "=0"

Example code

class Pet{  // base class (abstract because of speak)
    string name;
    int petID;
  public:
    Pet (int newID = 0) { petID = newID;}
    string getName() const {return name;}
    virtual void setName(string newName) {name = newName;}
    virtual void speak() const = 0; // Pure virtual function 
};

class Cat : public Pet{// Cat Is A Pet // derived class
    doucle whiskerLength;
  public:
    Cat() :Pet(10000){ } //explicit call to BASE constructor
    void speak() const{cout << "MEOW!" << endl;}
    void setLength(double newLength);
    double getLength()const {return whiskerLength;}
    void setName(string newName);
    Cat& operator = (const Pet&);
};

What we discussed
- Definition of object and class
- The concept of encapsulation
- The creation of a class
- Enforcing protections and access
- Accessors/Mutators and const
- How to guarantee proper creation
- Using operators on classes
- Classes that contain dynamic memory
- Inheritance 
- Polymorphism/ Dynamic binding
