#include <iostream>
using namespace std;
int main(){
    /*
    left shift - 7<<2 left shift 7 with 2

    7               = 00000111
    1st shift       = 00001110
    2nd shift       = 00011100 // which is equal to 28   
    */
    // shortcut == (a<<b) == (a*2^b)

    /*
    right shift - 7>>2 right shift 7 with 2
    7               = 00000111
    1st shift       = 00000011
    2nd shift       = 00000001 // which is equal to 1
    */
    cout<<(7<<2)<<endl;
    cout<<(7>>2)<<endl;
}