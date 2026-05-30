#include <iostream>
using namespace std;
int main(){
    int n = 10829;
    int digSum = 0;
    
    while (n >0)
    {
        int lastDig = n%10 ;
        cout<<lastDig<<" ";
        n = n/10;
        digSum += lastDig;
    }
    cout<<endl<<digSum;   
}