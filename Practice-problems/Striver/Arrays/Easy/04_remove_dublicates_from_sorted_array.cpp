#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.size() == 0){
        return 0;
    }

    int k = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[k] = nums[i];
            k++;
        }
    }

    // IMP--  by printing we understand the problem more correctly which is already given in the problem statement 
    // the thing is that it reinitialise the array with the unique elements only like 
    /*
        num[0] = 0 already there
        num[1] = 1 when i = 2
        num[2] = 2 when i = 5
        num[3] = 3 when i = 7
        num[4] = 4 when i = 9
    */
   // the output is only valid till the value of k that is 5 in that case afterwards the values are useless or we can say not unique or extra
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    return k;
}

int main()
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(nums);
    return 0;
}