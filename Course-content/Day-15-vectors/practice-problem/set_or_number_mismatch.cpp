#include <iostream>
using namespace std;


int main(){
    int arr[4] = {1,2,2,4};

    int size = 4;
    int temp[size]; // we can also use direct 4
    int x = 1;
    for (int i = 0; i < size; i++)
    {
        temp[i] = x;
        x++;
        if (arr[i] != temp[i])
        {
            cout<<"("<<arr[i]<<","<<i+1<<")";
        }
        
    }
    return 0;
}