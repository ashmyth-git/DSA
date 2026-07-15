#include <iostream>
#include <vector>
using namespace std;

// works for both positive and negative values
int longestSubarray(vector<int> &nums, int k)
{
    int n = nums.size();
    int maxLength = 0;

    for (int startIndex = 0; startIndex < n; startIndex++)
    {
        for (int endIndex = startIndex; endIndex < n; endIndex++)
        {
            int currentSum = 0;
            for (int i = startIndex; i <= endIndex; i++)
            {
                currentSum += nums[i];
            }
            if (currentSum == k)
            {
                maxLength = max(maxLength, endIndex - startIndex + 1);
            }
        }
    }
    return maxLength;
}

int main()
{
    vector<int> nums = {-1, 1, 1};
    int k = 1;
    cout<<longestSubarray(nums, k);
    return 0;
}