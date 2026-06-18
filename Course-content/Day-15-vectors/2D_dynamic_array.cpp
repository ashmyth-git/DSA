#include <iostream>
using namespace std;

// directly it is impossible to create 2d array directly we will create it dynamically with joining each sepereate row

/*
    int *arr = new int[size] // it is an integer array
    int **arr = new int[size] // it is an pointer integer array || pointer array || 2d matrix is formed by this method only
*/

int main(){
    int rows;
    int cols;
    cout<<"Enter rows :"<<endl;
    cin>>rows;
    cout<<"Enter cols :"<<endl;
    cin>>cols;

    int* *matrix = new int*[rows];

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols];
    }
    
    //data store
    int x = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = x++;
            cout<<matrix[i][j]<<" ";  
        }
        cout<<endl;
    }
        return 0;    
}