#include <iostream>
using namespace std;

// class name is generally start with an upper case
class Student{
    //properties
    string name;
    float cgpa;

    // methods or function
    void getPercentage(){
        cout<<(cgpa * 10)<<"%"<<endl;
    }

};

// this is the real life application of oops like for any social media platforn hai=ving large number of users
class User{
    int id;
    string userName;
    string password;
    string bio;

    void dactivate(){
        cout<<"Deactivating account"<<endl;
    }

    void editBio(string newBio){
        bio = newBio; // function to edit bio add new bio in place of previous bio
    }
};

int main()
{
    Student s1; // object s1 will be created // in this all the properties of student is in the term s1
    cout<<sizeof(s1)<<endl; // this will show how many byte that class object will take that is 28 in this case 24 for string and 4 byte for float
    return 0;
} 