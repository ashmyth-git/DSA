#include <iostream>
using namespace std;

void func(int matrix[][4], int n, int m ){
    // cout<<"0th row ptr "<<matrix<<endl;
    // cout<<"1st row ptr "<<matrix+1<<endl;
    // cout<<"2nd row ptr "<<matrix+2<<endl;
    // // both will give same value but are different  second is used to find the value of an element of an array
    // cout<<"0th row value "<<*matrix<<endl;
    // cout<<"1st row value "<<*(matrix+1)<<endl;
    // cout<<"2nd row value "<<*(matrix+2)<<endl;

    cout<<*((*matrix+2)+2)<<endl;
}
// both will have same meaning just different way of representation
void func2(int (*matrix)[4], int n, int m){

}

int main(){
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};
    func(matrix, 4, 4);
    return 0;
}