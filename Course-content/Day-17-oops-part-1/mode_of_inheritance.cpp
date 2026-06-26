#include <iostream>
using namespace std;

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
            // private , public, protected 3 can be used in derived class
class Fish : protected Animal{ // when we want to keep the member function private but also want to inherit then we use protected inheritance
    public:
    int fins;

    void swim(){
        eats(); // this is protected inheritance ie used inside the class now it can be access in the main indirectly
        cout<<"Swims"<<endl;
    }
};

int main()
{
    Fish f1;
    f1.fins = 3;
    cout<<f1.fins<<endl;
    f1.swim(); 
    // f1.eats();// this will not accessible in main as it was protected but it can be access in class inherit
    // f1.breathe();
    return 0;
}