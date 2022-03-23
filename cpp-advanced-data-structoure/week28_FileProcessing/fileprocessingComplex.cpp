#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void openInputFile(ifstream & inFile){
    string filename;
    cout<<"Enter the file name"<<endl;
    cin>>filename;
    inFile.open(filename);
    while(!inFile){
        // cout<<"File failed to open"<<endl;
        // cout<<"What is filename?"<<endl;
        cin >> filename;
        inFile.clear();
        inFile.open(filename);
    }
}

struct Student
{   int id;
    double testScore;
    string name;
};

int main(){
    ifstream inFile;
    openInputFile(inFile);
    vector<Student> vs;
    Student temp;
    while(inFile>>temp.id){
        //cout<<temp.id<<endl;
        inFile >> temp.testScore;
        //cout<<temp.testScore;
        //inFile.ignore(9999, '\t');
        getline(inFile, temp.name);
        //cout<<temp.name;
        vs.push_back(temp);
    }
    cout<<"Students with test score greater 90: "<<endl;
    for(Student s : vs){
        //cout<<s.name<<endl;
        if (s.testScore > 90)
            cout<< s.name <<endl;
    }
    return 0;
}