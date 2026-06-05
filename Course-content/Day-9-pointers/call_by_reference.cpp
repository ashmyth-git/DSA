#include <iostream>
using namespace std;

void changeA(int *ptr){ // call by reference using pointers
    *ptr = 20;
    cout<<*ptr<<endl;
}

int main()
{
    int a;
    changeA(&a);
    cout<<a<<endl;
    return 0;
}