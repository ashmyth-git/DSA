# include <iostream>
using namespace std;

void function(int arr[]){
    arr[0] = 1000;
}
// both int arr[] and *ptr will gave same results
void function2(int *ptr){
    ptr[0] = 1000;
}

int main(){
    int a = 5;
    int *ptr = &a;
    cout<<ptr<<endl;

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    /*
    cout<<arr<<endl; // it will give a hexadecimal number which is the location of the array's first element
    cout<<*arr<<endl; // it will print first element of the array   
    cout<<*(arr+1)<<endl;// it will print next element
    */

    function(arr);
    cout<<arr[0]<<endl; // it will change the value of 0 index element in a array

}