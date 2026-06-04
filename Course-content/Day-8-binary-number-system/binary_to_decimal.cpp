#include <iostream>
using namespace std;

void binToDec(int binNum){
    int n = binNum;
    int DecNum = 0;
    int pow = 1; 

    while (n>0)
    {
        int lastDig = n%10;
        DecNum = DecNum + lastDig*pow;
        pow = pow*2;
        n = n/10;
    }
    cout<<DecNum;
}

int main(){
    binToDec(101);
}