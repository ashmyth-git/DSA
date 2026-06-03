#include <iostream>
using namespace std;

int largest(int a, int b, int c){
    if (a>b && a>c)
    {
        cout<<a<<" is the largest number "<<endl;
    }
    else if(b>c){
        cout<<b<<" is the largest number "<<endl;
    }
    else{
        cout<<c<<" is the largest number "<<endl;
    }
}

int main(){
    largest(12,4,2);
}