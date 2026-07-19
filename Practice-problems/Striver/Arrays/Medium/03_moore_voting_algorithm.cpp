#include <iostream>
#include <vector>
using namespace std;

// this works on the principle in which it does not have effect if the number has frequence> n/2 it will show answer even if a more than 1 vote that another
int majorityElement(vector<int> &nums)
{
    int candidate = nums[0];
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
        }

        if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return candidate;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums);
    return 0;
}