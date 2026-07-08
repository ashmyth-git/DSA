#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int secondLargestElement(vector<int> &nums)
{
    int largest = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    }

    int secLargest = INT_MIN;
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != largest && nums[j] > secLargest)
        {
            secLargest = nums[j];
        }
    }

    if (secLargest == INT_MIN)
    {
        return -1;
    }
    
    return secLargest;
}

int main()
{
    vector<int> nums = {8, 8, 7, 6, 5};
    // vector<int> nums = {10,10,10,10,10};
    cout<<secondLargestElement(nums);
    return 0;
}