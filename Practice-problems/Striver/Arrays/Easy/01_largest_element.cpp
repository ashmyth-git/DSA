#include <iostream>
using namespace std;

int largestElement(int arr[], int n)
{
    // int largest = 0;
    int largest = arr[0]; // it is used because if all the element are negative value then it will return 0 which is wrong, therefore we use this

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int arr[4] = {3, 3, 6, 1};
    int n = 4;
    cout << largestElement(arr, n) << endl;
    return 0;
}

/*
    class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = 0;
        for(int i = 0; i <nums.size(); i++){
            if(nums[i] > largest){
                largest = nums[i];
            }
        }
            return largest;
    }
};
*/