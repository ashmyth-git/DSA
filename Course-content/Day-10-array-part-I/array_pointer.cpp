#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int *ptr = &x;

    int y = 25;
    ptr = &y;
    cout<<*ptr<<endl; // we can change the value of address of pointer from adress 1 to adress 2 but that is not possible in the case of array pointers
    return 0;
}