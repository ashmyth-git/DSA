#include <iostream>
using namespace std;

// class name is generally start with an upper case
class Student{
    private:
    string name; // this is still private

    public: // after this all the things that are written are public and can be accessible in the whole code

    //properties
    float cgpa;

    // methods or function
    void getPercentage(){
        cout<<(cgpa * 10)<<"%"<<endl;
    }

};

int main()
{
    Student s1;
    // s1.name = "Ashmit";  // this will ony accessible in class which means it is privately accessible
    // cout<<s1.name<<endl;

    s1.cgpa = 9.0;  // this does not give error as this is declared as public and can be used or access without any issue
    cout<<s1.cgpa<<endl;
    s1.getPercentage();// this will give 90 percent as an output
    return 0;
} 