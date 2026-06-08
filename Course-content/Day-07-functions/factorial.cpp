#include <iostream>
using namespace std;

int factorial(int n){
    int fact  = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    cout<<fact<<endl;
    return fact;
}

int main(){
    factorial(0);
    factorial(1);
    factorial(2);
    factorial(5);
}