#include <iostream>
using namespace std;

bool isPowerOf2(int num){
    if (!(num & (num-1)))
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    /*                             AND                                 ANSWER
        2           10                      1               1               0
        4           100                     3               11              0
        8           1000                    7               111             0
        16          10000                   15              1111            0   
        32          100000                  31              11111           0
    */
    cout<<isPowerOf2(4)<<endl;
    cout<<isPowerOf2(5)<<endl;
    return 0;
}