// user gives an expression with + - / and *

#include <iostream>
using namespace std;

int main(){
    //input the expression
    float value1, value2, result;
    char op;
    cout<<"Input the expression of format arg1 op arg2: \n";
    cin>>value1>>op>>value2;

    switch(op){
        case '+':
            result = value1 + value2;
            cout<<value1<<" "<<op<<" "<<value2<<" = "<<result<<endl;
            break;

        case '-':
            result = value1 - value2;
            cout<<value1<<" "<<op<<" "<<value2<<" = "<<result<<endl;
            break;

        case '/':
            if (value2 == 0)
                cout<<"Operation can't be done \n";
            else{
                result = value1 / value2;
                cout<<value1<<" "<<op<<" "<<value2<<" = "<<result<<endl;
            }
            break;

        case '*':
            result = value1 * value2;
            cout<<value1<<" "<<op<<" "<<value2<<" = "<<result<<endl;
            break;
        
        default:
            cout<<"operator not correct";
            break;
    }
    return 0;
}