#include <iostream>
using namespace std;

class Parent
{
public:
    void show()
    {
        cout << "Parent class is showing..." << endl;
    }

    virtual void hello(){
        cout<<"Parent hello..."<<endl;
    }
};

class Child : public Parent
{
public:
    void show()
    {
        cout << "Child class is showing..." << endl;
    }

    void hello(){ // we have to redefine this virtual function in derived class this will not automatically inherit and in derived class it is written without virtual keyword
        cout<<"Child hello..."<<endl;
    }
};

int main()
{
    // 2. Virtual function
    // virtual function is a member function that you expect to be redefined in derived class

    Child child1;
    Parent *ptr;
    
    ptr = &child1; // run time binding
    ptr->hello(); // virtual functions
}

// properties of virtual function-

// virtual funcitons are dynamic in nature 
// defined by the word virtual inside a base class and are always declare with a base class and overridden in a child class
// a virtual fuction is called during runtime