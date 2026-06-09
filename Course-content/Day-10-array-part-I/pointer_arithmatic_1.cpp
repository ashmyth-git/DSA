#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int *aptr = &a;
    // in pointer increment/decrement the value does not change
    // increment or decrement works on the type of data type used to declare pointer 
    // for ex if we use int *ptr then it will move 4 byte forward location
    //and if we use char *ptr then it will move towards 1 byte forward as it will take 1 byte memory
    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;
}