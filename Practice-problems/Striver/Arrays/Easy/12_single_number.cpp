#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// brute force or (my solution)
// int singleNumber(vector<int> &nums)
// {
//     int n = nums.size();
//     sort(nums.begin(), nums.end());
//     for (int i = 0; i < n-1; i++)
//     {
//         if (nums[i] == nums[i+1])
//         {
//             i++;
//         }
//         else{
//             return nums[i];
//         }
//     }
//     return nums[n-1];
// }


// optimal or more appropriate solution (using XOR ^ ) 
int singleNumber(vector<int> &nums){
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans = ans^nums[i];
    }
    return ans;
}

int main()
{
    // vector<int> nums = {2,2,1};
    vector<int> nums = {4,1,2,1,2};
    cout<<singleNumber(nums);
    return 0;
}