// Description
// A CSV is a comma-separated values file, which allows data to be 
// saved in a tabular format. CSVs look like a garden-variety 
// spreadsheet but with a . csv extension. CSV files can be used 
// with most any spreadsheet program, such as Microsoft Excel or 
// Google Spreadsheets. Each string has commas separating fields 
// and a carriage return and linefeed at the end of each record. 

// Write a csv_import function that reads a file and populates a 
// two-dimensional array of data. For this exercise you can assume 
// the array has space allocated for ten rows or more. The function 
// should only load the first ten records. The function will take 
// a parameter (2nd for the number of columns). You can also assume 
// 10 columns or less. 

// Here is an example call to the function
// Int records;
// string data[10][10];
// csv_import(data,3,&records,”customers.csv”);
// After the above code executes the file contents would be in the 
// array and the variable records would hold the number of rows that 
// were in the file.

// Function Signature
// void csv_import(string data[][10], int columns, int *records, string filename);

// File Name 
// csvimport.cpp

// Score
// There are three tests each worth 2 points
// Note: You do not need to submit any other code including the main method 
// or any print statements. ONLY the csv_import function is required. Otherwise,
// the autograder will fail and be unable to grade your code. (I.e., do not 
// include the above example in your code.) The above example should be used to 
// test your code but deleted or commented out upon submission.

#include <iostream>
#include <fstream>
using namespace std;

void csv_import(string data[][10], int columns, int *records, string filename){
    ifstream inFile;
    inFile.open(filename);
    while(!inFile){
        cout<<"Error opening file!";
        inFile.open(filename);
    }
    string temp, line, name, title, email;
    while(inFile>>name){
        (inFile, line);
        stringstream s(line);
    }
}

int main(){
    int records;
    string data[10][10];
    csv_import(data,3,&records,"customers.csv");
    return 0;
}