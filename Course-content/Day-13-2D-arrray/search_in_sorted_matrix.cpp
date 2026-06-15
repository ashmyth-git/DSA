#include <iostream>
using namespace std;

bool search(int matrix[4][4], int n, int m, int key){
    int i = 0;
    int j = n-1;
    while (i < n && j >= 0)
    {
        // O(n+m)
        if (matrix[i][j] == key)
        {
            cout<<"found at "<<"("<<i<<","<<j<<")"<<endl;
            return true;
        }
        else if(matrix[i][j] > key){
            // left
            j--;
        }
        else{
            //down
            i++;
        }
    }
    cout<<"Key not found "<<endl;
    return false;
}

int main(){
    int matrix[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};
    search(matrix, 4, 4, 50);
    return 0;
}