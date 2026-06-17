#include <iostream>
#include <cstring> // it should be used to use string function
using namespace std;
int main(){
    char str1[100] = "Apna college";
    char str2[100] = "Hello world";

    // str1 = "Hello world "; // we can not put direct value in char array like this instead we have to use like this ...

    strcpy(str1, str2);  // str 2 value will be given to str1
    
    strcat(str1, str2);  // to concatenate two strings
    cout<<str1<<endl;

    cout<<strcmp(str1, str2);  // to comapare two strings which gives 1 when it is true otherwise 0

    // important thing to note if first string is small (like abc and xyz) then it will print negative value and if second string is small then it will print positive value

    return 0;
}