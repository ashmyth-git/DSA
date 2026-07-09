#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > nums[(i + 1) % n])
        {
            count++;
        }
    }

    if (count == 1 || count == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    vector<int> nums = {3,4,5,1,2};
    // vector<int> nums = {1, 2, 3, 4, 5};
    cout << isSorted(nums);
    return 0;
}