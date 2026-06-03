#include <iostream>
using namespace std;

void sayHello(){
    cout<<"Hello :) \n";
}

void assistant(){
    sayHello();
    cout<<"Work done";
}

int main(){
    sayHello();// function call
    assistant();
    return 0;
}