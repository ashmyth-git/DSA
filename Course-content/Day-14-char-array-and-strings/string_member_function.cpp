#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello world!";

    cout<<str.length()<<endl; // use to know string length
    cout<<str.at(4)<<endl; // use to know value at an index same as str[4]
    cout<<str.substr(3, 5)<<endl; // it is use to print sub string with starting from 3 and size of substring is 5 (in this test case only)

    cout<<str.find("Hello")<<endl; //this will print the first occurance of keyword to find in a string 
    // point to note use exact word which we need to find

    
    return 0;
}