#include <iostream>
using namespace std;

int numberOcu(int arr[2][3], int n, int m, int key){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == key) 
            {
                count++;
            }
        }
    }
    cout<<"The number of occurance = "<<count<<endl;
}

int main()
{
    int arr[2][3] = {{4, 7, 7}, {8, 8, 7}};
    numberOcu(arr, 2, 3, 7);
}