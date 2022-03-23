#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1, str2, str3, first;
    cout<<"Please enter 3 words saperated by space : ";
    cin>>str1>>str2>>str3;

    // if(str1>str2)
    //     first = str2;
    // else
    //     first = str1;

    // if (str3<first)
    //     first = str3;

    if (str1 <= str2 && str1<= str3)
        first = str1;
    else if (str2 <= str1 && str2 <= str3)
        first = str2;
    else 
        first = str3;
    
    cout<<"first string : "<<first<<endl;

    return 0;
}