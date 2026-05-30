#include <iostream>
using namespace std;
int main(){
    int income;
    int tax;
    cout<<"Enter income "<<endl;
    cin>>income;
    if(income<500000){
        cout<<"Tax = 0 "<<endl;
    }
    else if (income>500000 && income<1000000){
        tax = 0.2*income;
        cout<<"Tax = "<<tax<<endl;
    }
    else if (income>1000000){
        tax = 0.3*income;
        cout<<"Tax = "<<tax<<endl;
    }
}