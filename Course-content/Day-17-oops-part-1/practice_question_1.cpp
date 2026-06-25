#include <iostream>
#include <string>
using namespace std;

class User{
    private:
    int id; 
    string password;

    public:
    string userName;

    User(int id){ // it is a constructor
        this->id = id;
    }

    // getter
    string getPassword(){
        return password;
    }

    // setter
    void setPassword(string password){
        this->password = password;
    }
};

int main()
{
    User user1(101);
    user1.userName = "Ashmit";
    user1.setPassword("password"); 
    cout<<"User name: "<<user1.userName<<endl;
    cout<<"password: "<<user1.getPassword()<<endl;
    return 0;
}