#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,23,121,43,31};
    int n = sizeof(arr)/sizeof(int);
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }  
    }
        cout<<max<<" ";
}