#include <iostream>
using namespace std;

void sayHello();// function declaration 
// this is important is c++ and called forward declaration means have to declare function(not define) before function calling!!!

int main(){
    sayHello();// function call
    return 0;
}

void sayHello(){          // function definition
    cout<<"Hello :) \n";
}