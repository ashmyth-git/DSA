#include <iostream>
using namespace std;

/*
int main(){
    int a  = 5;
    int *ptr = &a;

    cout<<ptr<<endl;
    cout<<(ptr+3)<<endl; 
    // the pointer will move towards 3*memory used by int i.e = 4 * 3
}
*/

void printArr(int *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    printArr(arr, n);
    return 0;
}