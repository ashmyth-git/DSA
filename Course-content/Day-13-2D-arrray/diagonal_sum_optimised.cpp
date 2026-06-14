#include <iostream>
using namespace std;

int diagonalSum(int matrix[4][4], int n){
    int sum = 0;

    // time complexity O(n)
    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][i]; // primary diagonal
        if (i != n-i-1)
        {
            sum += matrix[i][n-i-1]; // secondary diagonal
        }
    }
    cout<<"Sum = "<<sum<<endl;
}

int main(){
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};
    diagonalSum(matrix, 4); 
}