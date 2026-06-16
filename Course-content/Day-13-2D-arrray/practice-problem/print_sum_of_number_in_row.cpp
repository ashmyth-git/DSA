#include <iostream>
using namespace std;

int printNum(int nums[3][3], int n, int m){
    int sum = 0;
    for (int i = 1; i < 2; i++) // it is only used to print number of elements of second row not a general program
    {
        for (int j = 0; j < m; j++)
        { 
            sum += nums[i][j];
        }
    }
    cout<<sum<<endl;
}

int main()
{
    int nums[3][3] = {{1, 4, 9}, {11, 4, 3}, {2, 2, 3}};
    printNum(nums, 3, 3);
    return 0; 
}


//this is generalize program to print all the elements of any particular row 

// #include <iostream>
// using namespace std;

// int rowSum(int nums[3][3], int row, int m)
// {
//     int sum = 0;

//     for (int j = 0; j < m; j++)
//     {
//         sum += nums[row][j];
//     }

//     return sum;
// }

// int main()
// {
//     int nums[3][3] = {
//         {1, 4, 9},
//         {11, 4, 3},
//         {2, 2, 3}
//     };

//     int row;
//     cout << "Enter row number (0-2): ";
//     cin >> row;

//     cout << "Sum of row " << row << " = "
//          << rowSum(nums, row, 3) << endl;

//     return 0;
// }