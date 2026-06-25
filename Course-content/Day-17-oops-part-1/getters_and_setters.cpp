#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    string name;
    float cgpa;

    public:
    void getPercentage(){
        cout<<(cgpa * 10)<<"%"<<endl;
    }

    //if in class some properties are private so to access to write detail we have another function called setter that is use to access that particular properties 

    //setters

    void setName(string nameVal){ // its name is generally start with "set" keyword 
        name = nameVal;
    }

    void setCgpa(float cgpaVal){ // its name is generally start with "set" keyword 
        cgpa = cgpaVal;
    }

    // getters
    string getName(){
        return name;
    }

    float getCgpa(){
        return cgpa;
    }

};


int main()
{
    Student s1;
    s1.setName("Ashmit");
    s1.setCgpa(9.1);

    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa();
    return 0;
} 