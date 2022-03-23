#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    cout<<"arguments: "<<argv<<endl;
    cout<<"count "<<argc<<endl;
    if (argc <= 1){
        cout<<"Please enter the required argument"<<endl;
        return 1;
    }
    else if (argc > 1) {
        cout<<"first arg "<<argv[0]<<endl;
        cout<<"second arg "<<argv[1]<<endl;
        return 0;
    }
    cout<<"program executed sucessfully"<<endl;
    return 0;
}
