#include <iostream>
using namespace std;

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
        *mileage = *original.mileage; 
    }

    // destructor - it is also default made but also made custom just like constructor helps in deallocating memory // this will print after all the functions are performed
    ~Car(){
        cout<<"Deleting object.."<<endl;
        if (mileage != NULL)
        {
            delete mileage;
            mileage = NULL; //it contains garbage value and we explicitly allot null in the mileage
        }
        
    }
};

int main()
{
    Car c1("maruti 800", "white");
    cout<<c1.name<<endl; // these two memory will be deleted because it is statically created
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl; // but this is created dyanamically hence this will not delete

    return 0;
}