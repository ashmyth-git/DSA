#include <iostream>
using namespace std;

void oddOrEven(int num)
{
    if ((num & 1) == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
}

int main()
{
    /*
    last bit of odd number is 1 and for even number it is always 0

    logic explanation- 

    take case of 15 
    15                 = 00001111
    if we take complement with & 00000001 then all the bit will become zero but the last bit will preserve for example if that is zero then after taking complement with 1 it will remain or become zero but when it is 1 then after taking complement it will aslo remain 1 ie odd 
    */
    
    oddOrEven(5);
    oddOrEven(8);
    return 0;
}