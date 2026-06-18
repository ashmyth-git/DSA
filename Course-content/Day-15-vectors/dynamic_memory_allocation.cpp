#include <iostream>
using namespace std;

void func2(){
    int size;
    cin>>size;

    int *ptr = new int(size);// new is keyword to assign dynamic memory

    // IMPIMPIMP when we delete the fucntion all the stack memory in the funciton will get deleted but the dynamic memory which is created dynamically in the heap will not get deleted.
    // new int(size)
    
    int x = 1;
    for (int i = 0; i < size; i++)
    {
        ptr[i] = x;
        cout<<ptr[i]<<" ";
        x++;
    }

    
    delete [] ptr;  // [] as this is array otherwise dont use to delete strandard ptr (pointer)
    // this will delete the unoccupied memory in the heap to use by different c++ operation and make the code scalable


    return;
}

void func(){ 
    int arr[100] = {1,2,3,4,5};
    for (int i = 0; i < 100; i++)
    {
     cout<<arr[i]<<" ";   
    } 
    return;
}

int main(){
    func2(); // by using this the array will not create in the main function it will be created dynamically

    // cout<<arr[0]<<" ";
    // this is the example in this the array element will not print as it is not created in the main function and does not have any existence in the main function

    // there is stack which is like  a container in which function are there || but when we create memory dynamically it will create in the large memory which is called heap. dynamical memory is allocated in heap
}