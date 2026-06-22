#include <iostream>
using namespace std;

int clearithBit(int num, int i){
    int bitMask = ~(1 << i);
    return num & bitMask;
}

int main(){
    // clear means convert ith bit to zero
    cout<<clearithBit(6, 1)<<endl;
    return 0;
}