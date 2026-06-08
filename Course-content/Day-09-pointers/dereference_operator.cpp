#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;

    cout<<ptr<<endl; // this will show address of a
    cout<<*ptr<<endl;// this will show value of variable which is called dereferencing
    return 0;
}