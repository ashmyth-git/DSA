#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n = 21;
    bool isPrime = true;
    for (int i = 2; i <sqrt(n); i++)
    //this is used to calculate square root of n and we have to include the new library which is cmath and we calculate sqaure root because if will take less iteration to check and makes the program faster 
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "Input number is prime " << endl;
    }
    else
    {
        cout << "Input number is not prime " << endl;
    }
}