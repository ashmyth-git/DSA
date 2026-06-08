#include <iostream>
using namespace std;

int check_even(int a){
    if (a % 2 == 0)
    {
        cout<<"The given number is even"<<endl;
    }
    else{
        cout<<"The given number is odd"<<endl;
    }
}

int main(){
    int e = check_even(17);    
}