#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {2, -4, 4, 0, 10};
    int key = -4;
    cout<<linearSearch(nums, key);
    return 0;
}