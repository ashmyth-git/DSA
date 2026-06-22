#include <iostream>
using namespace std;
int main(){
    // bitwise operator

    // bitwise and (&) // & means 0 if any of one of them is 0 and 1 only for (1 & 1)
    cout<<(3 & 5)<<endl; // answer should be 1 

    // bitwise or(|) // | means if any one of them is 1 then the answer is 1 and 0 only for (0 | 0)
    cout<<(3 | 5)<<endl;// answer should be 7

    // bitwise XOR // ^ means if both of them are zero then answer should be 0 and both of them are different then the answer should be 1 //example (0 ^ 1) == 1
    cout<<(3 ^ 5)<<endl; // answer should be 6
    return 0;
}