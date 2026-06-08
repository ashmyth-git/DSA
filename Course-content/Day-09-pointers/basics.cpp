#include <iostream>
using namespace std;
int main(){

    /*this is used to print address of a variable
    int a = 10;
    cout<<&a<<endl;
    */
    
    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr;// this is used to store address of pointer ptr
    cout<<&ptr<<" = "<<pptr<<endl; 
    float b = 3.14;
    float *ptr2 = &b;

    cout<<ptr<<endl;//both value are
    cout<<&a<<endl;//same 

    cout<<&b<<endl;
    cout<<ptr2<<endl;

    cout<<sizeof(ptr)<<endl;// pointer will take 8 byte generally in 64 bit system
    cout<<sizeof(ptr2)<<endl;// but it is showing 4 

    return 0;
}