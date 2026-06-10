#include <iostream>
#include <climits> // this should be added to use INT_MIN function 
using namespace std;

void maxSubarraySum1(int *arr, int n){
    int maxSum = INT_MIN; //////////// imp 

    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currentSum = 0;
            for (int i = start; i <= end; i++)
            {
                currentSum += arr[i];
            }
            cout<<currentSum<<",";
            maxSum = max(maxSum, currentSum); // (max) this is used to find maximum between those two numbers, it will return maximum value between 2
        }
        cout<<endl;
    }
    cout<<"Maximum subarray sum = "<<maxSum<<endl;
}

int main()
{
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxSubarraySum1(arr, n);
    return 0;
}