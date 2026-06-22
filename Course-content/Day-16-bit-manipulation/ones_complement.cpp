#include <iostream>
using namespace std;
int main(){
    // binary not operator == ~0 = 1 and ~1 = 0
    /*
    num = 6;
    ~6             = 00000110
    1's complement = 11111001
    answer came out to be -7

    Explanation == the answer will be calculated in a way in which the first number will be most significant bit and responsible for positive or negative sign and to calculate the value of 1's complement of 6 we have to follow the following steps

    step 1 = take again 1's complement         = 00000110
    step 2 = then add +1 to the 1's complement = 00000111 (this is called 2's complement)
    step 3 = which is equal to                 = 7 and the sign is -(negative)
    */

    cout<<(~6)<<endl;
}