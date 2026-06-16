#include <iostream>
using namespace std;

void printArr(int arr[3][3], int n, int m){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(int arr[3][3], int n, int m){
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    printArr(arr, n, m);
}

int main(){
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    transpose(arr, 3, 3);
    return 0;
}