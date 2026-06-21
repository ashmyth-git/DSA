#include <iostream>
#include <vector>
using namespace std;

vector<int> findErrorNums(vector<int> nums)
{
    vector<int> ans;
    int n = nums.size();

    vector<bool> isPresent(n + 1, false);// means make vector of n+1 size and initialize all values to false 

    // Find duplicate number
    for (int i = 0; i < n; i++)
    {
        if (isPresent[nums[i]])
        {
            ans.push_back(nums[i]); // duplicate
        }
        isPresent[nums[i]] = true;
    }

    // Find missing number
    for (int i = 1; i <= n; i++)
    {
        if (!isPresent[i])
        {
            ans.push_back(i); // missing
            break;
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 2, 4};

    vector<int> ans = findErrorNums(nums);

    cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;

    return 0;
}