#include <iostream>
using namespace std;

class Base{
    public:
    virtual void print(){
        cout<<"base"<<endl;
    }
};

class Derived : public Base{
    public:
    void print(){
        cout<<"derived"<<endl;
    }
};

int main(){
    Base *b = new Derived();
    b->print(); // derived will print

    delete b;
    return 0;
}