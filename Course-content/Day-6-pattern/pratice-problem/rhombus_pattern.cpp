#include <iostream>
using namespace std;
int main(){
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        // for spaces
        for (int j = n; j >= i; j--)
        {
            cout<<" ";
        }
        // for stars
        for (int j = 1; j <= n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}