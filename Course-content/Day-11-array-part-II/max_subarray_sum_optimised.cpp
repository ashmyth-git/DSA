#include <iostream>
#include <climits> // this should be added to use INT_MIN function 
using namespace std;

void maxSubarraySum2(int *arr, int n){
    int maxSum = INT_MIN; //////////// imp 

    for (int start = 0; start < n; start++) // start = 2
    {
        int currentSum = 0;
        for (int end = start; end < n; end++) // end = 2,3,4,5,....
        {
            currentSum += arr[end];
            maxSum = max(maxSum, currentSum); // (max) this is used to find maximum between those two numbers, it will return maximum value between 2
        }
    }
    cout<<"Maximum subarray sum = "<<maxSum<<endl;
}

int main()
{
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxSubarraySum2(arr, n);
    return 0;
}