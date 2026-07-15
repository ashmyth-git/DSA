#include <iostream>
#include <vector>
using namespace std;

// works for only positive values 
int longestSubarray(vector<int> &nums, int k)
{
    int n = nums.size();
    int maxLen = 0;
    int left = 0, right = 0;
    int sum = nums[0];

    while (right < n)
    {

        while (left <= right && sum > k)
        {
            sum -= nums[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n)
        {
            sum += nums[right];
        }
    }
    return maxLen;
}

int main()
{
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    cout<<longestSubarray(nums, k);
    return 0;
}