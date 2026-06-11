#include <iostream>
#include <climits>
using namespace std;

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}

int countingSort(int *arr, int n)
{
    int frequency[10000];   // initialize

    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    // Step 1 - O(n)
    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }

    // Step 2 - O(range) = max - min
    for (int i = minVal, j = 0; i <= maxVal; i++)
    {
        while (frequency[i] > 0)
        {
            arr[j++] = i;
            frequency[i]--;
        }
    }

    printArr(arr, n);
    return 0;
}

int main()
{
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);

    countingSort(arr, n);

    return 0;
}