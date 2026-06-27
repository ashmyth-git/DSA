#include <iostream>
using namespace std;


// 1. single inheritance - one class inheritance other one properties
// 2. multi level inhertance- 3rd class inherit property of 2nd class and 2nd contains all the properties of first class and continue...
// 3. multiple inheritance- derived class will inherit the properties of two base class or more...

class Teacher{
    public:
    int salary;
    string subject;
};

class Student{
    public:
    int rollno;
    float cgpa;
};

class TA: public Teacher , public Student{
    public:
    string name;
};
int main()
{
    TA ta1;
    ta1.name = "Ashmit";
    ta1.subject = "C++";
    ta1.cgpa = 9.1;
    cout<<ta1.name<<endl;
    cout<<ta1.subject<<endl;
    cout<<ta1.cgpa<<endl;
    return 0;
}