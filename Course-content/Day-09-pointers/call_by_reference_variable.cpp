#include <iostream>
using namespace std;

void changeA(int &a){ // call by reference using reference variable
    a = 20;
    cout<<a<<endl;
}

int main(){
    int a = 10;
    changeA(a);
    cout<<a<<endl;
    
    // int &b = a;// here & does not mean address it is a reference variable
    // b = 25;
    // cout<<b<<endl;// now, here both value will change as 
    // cout<<a<<endl;// it is now pointing towards same variable
    return 0;    
}