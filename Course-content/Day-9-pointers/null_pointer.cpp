#include <iostream>
using namespace std;
int main(){
    int *ptr = NULL;// does not have any deninite location
    cout<<ptr<<endl; // this will print any random address

    cout<<*ptr<<endl;// this will show segmentation error as it does not hold any valid location so dereferencing is not possible 

    cout<<"bye";// this will not print as there is error and further code will not run
    return 0;
}