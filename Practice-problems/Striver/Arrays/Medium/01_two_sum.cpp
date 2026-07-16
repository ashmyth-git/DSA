#include <iostream>
#include <vector>
using namespace std;

// there is also one more optimal approach which uses hash so we'll do later
vector<int> twoSum(vector<int> nums, int target){
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int sum = nums[i] + nums[j];
            if (sum == target)
            {
                return {i , j};
            }
        }
    }
    return {};
}

int main()
{
    vector<int> nums = {2,7,11,15};
    int target = 18;
    vector<int> ans = twoSum(nums, target);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}