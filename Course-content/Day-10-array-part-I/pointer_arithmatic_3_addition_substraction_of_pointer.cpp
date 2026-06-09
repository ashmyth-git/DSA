#include <iostream>
using namespace std;
int main(){
    // addition of two pointer is invalid 
    // while we can do subtraction but pointer should be of same type

    int a = 5;
    int *ptr1 = &a;
    int *ptr2 = ptr1 + 3;

    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<ptr2 - ptr1<<endl;
    // imp.. this will show how much memory is present between two pointer to store how much entity that is int in this case
    return 0;
}