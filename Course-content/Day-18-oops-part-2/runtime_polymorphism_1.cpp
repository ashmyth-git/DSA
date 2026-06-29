#include <iostream>
using namespace std;

class Parent
{
public:
    void show()
    {
        cout << "Parent class is showing..." << endl;
    }
};

class Child : public Parent
{
public:
    void show()
    {
        cout << "Child class is showing..." << endl;
    }
};

int main()
{
    // 1. function overriding
    // Parent and Child both contains the same fucntion with different implementation
    // the parents class function is said to be overridden

    Child c1;
    c1.show(); // at run time it will decide which show function is called , dont know at compile time
    return 0;
}