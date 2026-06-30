#include <iostream>
using namespace std;

class Shape{ // abstract class
    public:
    virtual void draw() = 0; // pure virtual function made by assigning the value 0
};

class Circle : public Shape{
    public:
    void draw(){
        cout<<"Draw circle"<<endl;
    }
};

class Square : public Shape{
    public:
    void draw(){
        cout<<"Draw square"<<endl;
    }
};

int main(){
    // a pure virtual function (or abstract function) is a virtual function with no definition or logic.
    // It is declared by assigning 0 at the time of declaration 
    Circle c1;
    c1.draw();
    
    Square s1;
    s1.draw();
    return 0;
}