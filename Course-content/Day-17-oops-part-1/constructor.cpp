#include <iostream>
using namespace std;

// constructor is a special method invoked automatically  at the time of object creation. Used for initialization 
// properties
/*
    same name as class
    constructor does not have a return type
    only called once(automatically), at object creation
    memory allocation happens when constructor is called
*/

/*
    ("this") it is the special pointer in cpp that points to the current object

    this->prop is same as *(this).prop
*/

class Car{

    string name;
    string color;

    public:

    // initialising multiple constructor is called constructor overloading

    //constructor without parameter
    Car(){
        cout<<"Constructor without parameters"<<endl;
    }

    // constructor with parameters
    // it is a constructor || it is generally made in public class
    Car(string nameVal, string colorVal){
        cout<<"contructor with parameters"<<endl; // this line will show in output as we are using external constructor otherwise the the default constructor of cpp will be used 

        name = nameVal;
        color = colorVal;
    }

    /*
    // use of this pointer  
    Car(string name, string color){
        cout<<"contructor is called"<<endl;

        this->name = name;
        this->color = color;
        *this.color = color; // same as above 
    }
    */

    void carStart(){
        cout<<"the car has started"<<endl;
    }

    void carStop(){
        cout<<"the car has stopped"<<endl;
    }

    // getter
    string getName(){
        return name;
    }
};

int main()
{
    Car c0; // use by constructor without parameters ... can also see in output window
    Car c1("Maruti 800", "white");
    cout<<"Car name : "<<c1.getName()<<endl;
    return 0;
}