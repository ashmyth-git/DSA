#include <iostream>
using namespace std;
int main(){
    bool isAdult; // 0,1
    int age; 
    cout<<"Enter age "<<endl;
    cin>>age;
    isAdult = age>18 ? true : false;
    cout<<isAdult;
    return 0;
    
}