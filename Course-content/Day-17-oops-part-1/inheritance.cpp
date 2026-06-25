#include <iostream>
using namespace std;
// when properties and member function of base class are passed on the derived class

class Animal{
    public:
    string color;

    void eats(){
        cout<<"eats"<<endl;
    }

    void breathe(){
        cout<<"breathes"<<endl;
    } 
};

class Fish : public Animal{ // after semicolon what is written is use of inhertitance it will inherit all the function from animal class
    public:
    int fins;

    void swim(){
        cout<<"Swims"<<endl;
    }
};

int main()
{
    
    return 0;
}