#include <iostream>
using namespace std;
int main(){
    int n;
    int final = 0;
    cout<<"Enter number n "<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        final = final + i;
    }
    cout<<"The sum of n natural number = "<<final;
}
