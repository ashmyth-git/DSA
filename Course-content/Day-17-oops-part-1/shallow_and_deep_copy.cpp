#include <iostream>
using namespace std;
// shallow copy copies references to original array. But the array remains same.
// Deep copy created a brand new copy of the array
// Compiler generally create a shallow copy of array
// We need to define our own copy constructor when deep copy is needed i.e. when class contains pointeres to dynamically allocated memory.

class Car{
    public:
    string name;
    string color;
    int *mileage;

    Car(string name, string color){ // parameterized constructor
        this->name = name;
        this->color = color;
        mileage = new int; // it will give dynamic memory of equal to int
        *mileage = 12; // it will initialize the value
    }

    // custom copy constructor
    Car(Car &original){
        cout<<"Copying original to new"<<endl;
        name = original.name;
        color = original.color;
        
        mileage = new int;
        *mileage = *original.mileage; // this will create new dynamically allocated memory (not point to the same position and print same value), this will point to two different dynamically allocated location
        // by doing above thing we get deep copy and both will print different values
    }
};

int main()
{
    Car c1("maruti 800", "white");
    Car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;

    *c2.mileage = 10;
    cout<<*c1.mileage<<endl; // if we change the value of mileage in c2 it will also change the value for c1 also // this will happen in shallow copy and now updated is deep copy
    // this will show that c1 and c2 points to the same memory location in the heap
    cout<<*c2.mileage<<endl;
    return 0;
}