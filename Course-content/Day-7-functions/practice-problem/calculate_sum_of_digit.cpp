#include <iostream>
using namespace std;

int digsum(int n){
    int res = 0;
    while (n>0)     // solution given
    {
        res = res + n%10;
        n = n/10;
    }

    // for (int i = n; n > 0; i++) // this is for reference understanding but not absolutely correct
    // {
    //     /* code */
    //      res = res + n%10;
    //      n = n/10;
    // }
    
    return res;
}

int main(){
    int s = digsum(833);
    cout<<s;
}