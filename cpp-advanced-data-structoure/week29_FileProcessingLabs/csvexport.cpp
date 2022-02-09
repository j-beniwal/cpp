// Description
// A CSV is a comma-separated values file, which allows data to be saved 
// in a tabular format. CSVs look like a garden-variety spreadsheet but 
// with a . csv extension. CSV files can be used with most any 
// spreadsheet program, such as Microsoft Excel or Google Spreadsheets. 
// Each string has commas separating fields and a carriage return and 
// linefeed at the end of each record. 
// Write a csv_export function that takes in a two dimensional array of
// data and creates a file with the name specified in the parameter. The
// function will take a parameter (2nd for the number of columns). You 
// can also assume 10 columns or less. 

// Here is an example call to the function
// string data[10][10] = {{"aspen","olmsted","aspen@pleasedonotemail.com"},{"sally","jones","sally@gmail.com"},{"fred","smith","fsmith@aol.com"}};
// csv_export(data,3,3,”customers.csv”);

// After the above code executes the file contents would look like this:.
// aspen,olmsted,aspen@pleasedonotemail.com
// sally,jones,sally@gmail.com
// fred,smith,fsmith@aol.com

// Function Signature
// void csv_export(string data[][10], int records,int columns, string filename);

// File Name 
// csvexport.cpp

// Score
// There are three tests each worth 2 points
// Note: You do not need to submit any other code including the main method or any
// print statements. ONLY the csv_export function is required. Otherwise, the 
// autograder will fail and be unable to grade your code. (I.e., do not include 
// the above example in your code.) The above example should be used to test your 
// code but deleted or commented out upon submission.

#include <fstream>
#include <iostream>
using namespace std;

void csv_export(string data[10][10], int records,int columns, string filename){
    ofstream outFile;
    outFile.open(filename);
    for (int current_record = 0; current_record < records; current_record++){
        for(int current_column = 0; current_column < columns; current_column++){
            outFile<<data[current_record][current_column];
            if(current_column<columns-1)
                outFile<<",";
            else    
                outFile<<endl;
        }
    }
}

int main(){


    string data[10][10] = {{"aspen","olmsted","aspen@pleasedonotemail.com"},{"sally","jones","sally@gmail.com"},{"fred","smith","fsmith@aol.com"}};
    csv_export(data,3,3,"customers.csv");

    return 0;
}