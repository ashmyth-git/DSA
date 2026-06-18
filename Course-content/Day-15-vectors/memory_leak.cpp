#include <iostream>
using namespace std;

// a memory leak occurs when programmer create a memory in a heap and forget to delete it . leads to reduced performance due todepletion of available memory

int* func(){
    int *ptr = new int; // create a new pointer
    *ptr = 1200;
    cout<<"ptr points to "<<*ptr<<endl;
    return ptr;
}

int main()
{
    int *x = func();
    cout<<*x<<endl;
    return 0;
}