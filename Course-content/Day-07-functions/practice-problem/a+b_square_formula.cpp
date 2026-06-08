#include <iostream>
using namespace std;

int sqr(int a, int b){
    int result = a*a + b*b + 2*a*b;
    cout<<"result = "<<result<<endl;
}

int main(){
    sqr(2,2);
}