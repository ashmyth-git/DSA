#include <iostream>
using namespace std;
// copy constructor - it is a special constructor used toc copy properties of one object into another 
// in cpp it is automatically created which does not happen in java

class Car{
    public:
    string name;
    string color;

    Car(string name, string color){ // parameterized constructor
        this->name = name;
        this->color = color;
    }

    // custom copy constructor
    Car(Car &original){
        cout<<"Copying original to new"<<endl;
        name = original.name;
        color = original.color;
    }
};

int main()
{
    Car c1("maruti 800", "white");
    Car c2(c1); // custom copy constructor is called
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    return 0;
}