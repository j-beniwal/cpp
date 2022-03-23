// program converts the lowercase letters to the upper case letters
#include <iostream>
using namespace std;
const int DIFF = 32;
int main(){
    // take a user input
    // diynamically calculate the offset
    // offset = lower_case - 'a' + upper_case
    // uppercase = 'A
    char lower_case;
    char upper_case;
    cout<<"Enter the letter in the lower case : "<<endl;
    cin>>lower_case;
    cout<<"upper case letter is "<<(char)(lower_case- DIFF)<<endl;
    upper_case = lower_case - DIFF;


    return 0;
}