#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter your first number "<<endl;
    cin>>a;
    cout<<"Enter your second number "<<endl;
    cin>>b;
    cout<<"Enter your third number "<<endl;
    cin>>c;
    if(a>b && a>c){
        cout<<"a is largest "<<endl; 
    }
    if(b>a && b>c){
        cout<<"b is largest "<<endl; 
    }
    if(c>a && c>b){
        cout<<"c is largest "<<endl; 
    }
}