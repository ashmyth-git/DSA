#include <iostream>
using namespace std;
int main(){
    int student[3][3] = { {100,100,100}, {87,89,97}, {89,67,98}};
    int n = sizeof(student)/sizeof(int);
    cout<<student[1][2];
    return 0;
}