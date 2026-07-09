#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums, int n)
{
    if (nums.empty())
        return 0;

    int k = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main()
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int n = nums.size();
    cout<<removeDuplicates(nums, n);
    return 0;
}