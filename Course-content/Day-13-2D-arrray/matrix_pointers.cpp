#include <iostream>
using namespace std;
int main(){
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};
    cout<<matrix<<endl; // first row       || different from array
    cout<<matrix+1<<endl; // second row    || it will move towards next row rather than next element of the array
    return 0;
}