#include <iostream>
// char array is used to store strings
using namespace std;
int main(){
    char str[5] = {'a', 'b', 'c', 'd','\0'}; // \0 is the terminating value for strings 
    // strings should always be terminated with \0

    // "apna college" // it is string literals and does not require to terminate with \0
    cout<<str<<endl;
    cout<<str[0]<<endl;
    cout<<str[1]<<endl;
    cout<<str[2]<<endl;
    cout<<str[3]<<endl;
}
