# Week 28 - File Processing
# File Processing Lecture

File and file system to bring data in program and store data once done. 

File Processing
- Data cannot be typed in at the keyboard every time. 
- There needs to be a way to access data on the file system. 
- Input : reading data into your program.
- Output : writing data out from your program. 

Files and locks
- Files all contain a name 
- They also have extension
- Cauton: the "extension" (.txt, .xls, .doc) might be hidden 
  but still present
- To open a file, you must know its name (with the extension).
- Files exist in a directory (aka folder).
- A file exists in one directory. 
- If you don't specify a direcotry, the "current" directory is used.
- In VS, the "current" directory will be where you .cpp file is located.
- You may specify another directory by using "/". 
- If a file is in use for writing. it may be locked to prohibit reading. 

Objects 
- C++ has an internal representation for a file
- The datatype differs if we're discussing an input file or an output file
- Input file are represented by ifstream.
- Output files are represented by ofstream.

Steps to Creating
- First you must "#inclue <fstream>" in your program
- You must create an object of the type appropriate to the action you wish to perform
  (input or output)
- You must "open" the connection to the file on the storage system
    - This may fail, you should check it!
- Once opened, the object can be used for input and output in much
  the same way as we used cin and cout. 

Passing to a Function
- ifstream and ofstream objects may be passed to and returned from a function
- When passing, they MUST be passed (or returned) by reference. 
    - The act of writing to or reading from one of these objects changes the object. 

cin and cout
- cin and cout are also objects.
- cin's datatype is istream, cout's datatype is ostream. 
- ifstream is a derived class of istream so we can setup our functions
  to use "istream&" and it can accept either cin or a file stream!
            #include <iostream>

[]----> cout            cin ----->[]
    <ostream>          <istream>

Output
- C++ makes it relatively easy to do output
- Create the object: ofstream outFile;
- And open it: outFile.open("filename.txt");
- You can also use the constructor for the fstream class:
  - ofstream outFile("filename.txt")
- Rarely will opening an output file fail, but it may
  - You might not have permission
  - The drive might be full
- Once open, you can write to the output file exactly as you would to the screen
  - outfile<<"Hello world";

More on otupt
- When opening a file. 
  - if the file does exist, it will be overwritten!
  - If the file doesn't exist, it will be created
- When you are done, call the close function on the file. 
- Realize that there is a buffer for the output so the actual writing of the file 
  may not happen until you call close, the ofstream object is destroyed or your
  program ends. 

Input
- Just like ofstream, we have ifstream for reading in information
  - Ifstream inFile("file.txt"); or you can use .open just like on ofstream.
- ifstream objects are more likely to fail when opening
  - Usually due to a bad filename or the lack of existence of a file
  - It is vital that you check to see that a file is opened sucessfully
- ifstream includes a bool member which allows you to check the validity of the
  file: "if(inFile)" or better yet "while(infile)"
- if you are going to try opening the file again, you must clear the flags using .clear

Reading in data
- Many books use .eof to detect the "endo of file" but we recommend against that
- EOF tells us that the end of file has reached. 
- End to check the EOF we have to read the file. 
- For an empty file eof has not been reached bcz we have not read the file. 
- insted use below:
  while (inFile >> temp)
    Does both the read operation and test if the read operation was sucessfull. 
- Using the input operator  (>>), in c++ will:
  - skip leading whitespace character.
  - Read in  "valid" characters. 
  - stops when reaches trailing whitespace or an invalid character. 

What's valid
- what constitue valid characters depends on the data type. 
- The data type of temp (the variable in which we read data)
  defines the valid data type.
- If it is a string then anythin can go in, everything is a valid character. 
- if temp data type is int then letters can't be read in integers. So a letter will
  be a invalid character for an integer. Integer can accept whole numbers. A period 
  is invalid for the integer.
  for a double first period is valid while second is invalid. 
  for a char fir character is valid while the second is invalid. 

Getline
- we saw how to read a single character what if we have to read the whole line. 
- we can use getline function to get everything till the end of the line. 
- dosen't skip white space and reads till the end of the line and stops when get the 
  return character and does not return the return character and the return character will
  will be removed. 
- So if we put in loop we can get an array of strings 
- Only faces problem when the file pointer is pointing to return character. 
- Calling:
  getLine(inFile, myString);

Ignore
- We can use .ignore function to skip characters 
- we specify how many characters to skip and we specify which character to stop at. 
- Example:
  inFile.ignore(9999,'\n')
    which makes skip upto 9999 characters or the first return character that you see. 
- mostly used with input inFile, if we are stopped at return character then we will 
  be getting nothing, so we use ignore to ignore the return character and move to the 
  next line. 

  seekg
  - Helps in moving around the file by moving the pointer. 
  - specify '0' it takes us to the begining of the file. 
  - if we have reached the EOF then the file is in failed state as we have read the whole
    file using seekg and moving to the begining dosen't clear those flags. 
  - you should call the clear to clear the flags. 

  Reading and writing?
  - what if we want to do both. 
  - Surprisingly, its very strange to want to edit a file inplace. 
  - What happens in word? it reads the whole file in the main memory and then make changes 
    there, if you forgot to save the file you loose the changes. 
  - Usually we read in the ENTIRE file, make the changes in the memory and then write out the
  entire file to the disk. 
  - This means we're not doing both read and a write at the same time!
  - Steps:
    - opening an input file. 
    - the complete reading in operation of the input file. 
    - then calling close on that input file. 
    - then we do the necessary changes 
    - opening the output file. 
    - write everything out. 
    - Close the output file. 

  Appending
  - When passed as a second parameter to .open, ios::app is way to tell c++ that 
    you want to append to the file, and not overwrite it. 
  - if the file doesn't exist it will create new. 
  - if file does exist, anything you add will be added to the end of the file. 
  - The orignal content will remain. 
  - it will do seekg as a first step and find the end. 

  Review
  - we shaw how to open file
    - for reading
    - for writing.
  - write out information to the file
  - read in information of a file. 
  - how input operator works. 
  - reading valid characters. 
  