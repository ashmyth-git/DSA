#include <iostream>
using namespace std;
int main(){
    int n ;
    bool isPrime = true;
    cout<<"Enter your number "<<endl;
    cin>>n;
    for (int i = 2; i <n-1; i++)
    {
        if (n%i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout<<"The given number is prime "<<endl;
    }
    else{
        cout<<"The given number is not prime "<<endl;
    }
    

    

}