#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream outFile;   // ofstream outFile("outfile.txt")
    outFile.open("outfile.txt");
    outFile<< "Hello world!! "<<endl;
    outFile.close();
    return 0;
}