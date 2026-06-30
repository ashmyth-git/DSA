#include <iostream>
using namespace std;

class Parent{
    public:
    Parent(){
        cout<<"constructor of parent"<<endl;
    }
    
    ~Parent(){
        cout<<"destructor of parent"<<endl;
    }
}; 

class Child : public Parent{
    public:
    Child(){
        cout<<"constructor of  child"<<endl;
    }

    ~Child(){
        cout<<"destructor of  child"<<endl;
    }
};

int main(){
    // analyse the output...
    Child ch1;
    return 0;
}