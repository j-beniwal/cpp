#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void openInputFile(ifstream & inFile){
    string filename;
    cout<<"Give the filename."<<endl;
    cin >> filename;
    inFile.open(filename);
    while(!inFile){
        cout<<"File fail to open"<<endl;
        cout << "Give the filename"<<endl;
        cin >>filename;
        inFile.clear();
        inFile.open(filename); 
    }
}

int main(){
    ifstream inFile;
    openInputFile(inFile);
    vector<int> v;
    int temp;
    while (inFile>>temp){
        v.push_back(temp);
    }
    
    double sum = 0;
    for(int item : v){
        sum += item;
        
    }
    cout<< "The average of the integers in the file is : "<< sum/ v.size() <<endl;
    return 0;
}