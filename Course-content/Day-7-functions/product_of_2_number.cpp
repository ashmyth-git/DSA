#include <iostream>
using namespace std;

int product(int a, int b){
    int product = a*b;
    return product;
}

int main(){
    int p = product(2,5);
    cout<<p;
}