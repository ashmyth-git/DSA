#include <iostream>
using namespace std;

int bitMask(int num, int i){
    int bitMask = 1 << i;

    if ((num & bitMask) == 0)
    {
        return 0;
    }
    else{
        return 1;
    }  
}

int main(){
    /*
    num = 6; and find 2nd ith bit
    6                     = 00000110
    required &complement  = 00000100
    answer after complment= 00000100 // which is equal to 4 which means it is postive that means the i = 2 bit is 1 ie positive not zero 
    */

    cout<<bitMask(6, 2)<<endl; // answer should be 1
    return 0;
}