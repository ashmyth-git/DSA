#include <iostream>
using namespace std;
int main(){
    int n = 4;

    // first pyramid
    for (int i = 1; i <= n; i++)
    {
        // for spaces
        for (int j = 1; j < n-i; j++)
        {
            cout<<" ";
        }

        //for stars 
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    // second pyramid
    for (int i = n; i >= 1; i--)
    {
        //spaces
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        
        //stars
        for (int j = 0; j < 2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;    
    }
}