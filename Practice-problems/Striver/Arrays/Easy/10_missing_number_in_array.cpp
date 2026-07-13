#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int actualSum = n * (n+1)/2;

    int currentSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        currentSum += nums[i];
    }

    int missingNum = actualSum - currentSum;
    return missingNum;
}

int main()
{
    vector<int> nums = {0, 1, 2, 4, 5, 6};
    // vector<int> nums = {0, 2, 3, 1, 4};
    cout<<missingNumber(nums);
    return 0;
}