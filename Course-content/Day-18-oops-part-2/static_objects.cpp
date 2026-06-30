#include <iostream>
using namespace std;

class Example{
    public:
    Example(){
        cout<<"constructor..."<<endl;
    }

    ~Example(){
        cout<<"destructor..."<<endl;
    }
};

int main(){
    int a  = 0;
    if (a == 0)
    {
        static Example eg1; //  if we declare function or element by static it will not delete untill the whole code is completed means it is declared for the lifetime
        // for example if we dont use static then the constructor called then destructor then the further code ending.. will print 
        // but... after using static the contructor called then the further code run adn at the very end the destrucor will delete or empty the memory
    }
    
    cout<<"code ending..."<<endl;
}