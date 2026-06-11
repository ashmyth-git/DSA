#include <iostream>
#include <algorithm> // sort require this library
using namespace std;

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}

int main(){
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    sort(arr, arr+3); // it can also use to sort array in parts if we don't want to sort the whole array
    sort(arr, arr+8);

    sort(arr, arr+8, greater<int>()); // it is used to sort the array in descending order

    printArr(arr, 8);
    return 0;
}