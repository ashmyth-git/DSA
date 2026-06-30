#include <iostream>
using namespace std;

class A{
    string secret = "secret data";
    friend class B; // this will tell that b is a friend class
    friend void revealSecret(A &obj);
};

class B{
    public:
    void showScret(A &obj){
        cout<<obj.secret<<endl;
    }
};

void revealSecret(A &obj){
    cout<<obj.secret<<endl;
}

int main(){
    A a1;
    B b1;

    // b1.showScret(a1);

    revealSecret(a1);
    return 0;
}