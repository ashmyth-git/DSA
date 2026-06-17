#include <iostream>
#include <string>
using namespace std;
int main(){
    string str = "hello"; // string is created
    cout<<str<<endl; 

    str = "yellow"; // point to note is it not possible in character arrays 
    cout<<str<<endl; 

    string str2;
    getline(cin, str2); // it is used to take input from the user and it is slightly different from char array you can caompre also.
    return 0;
}