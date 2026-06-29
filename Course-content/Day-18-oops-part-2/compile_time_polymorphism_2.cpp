#include <iostream>
using namespace std;

class Complex{
    int real;
    int img;

    public:
    Complex(int r, int i){
        real = r;
        img = i;
    }

    void showNum(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    void operator + (Complex &c2){
        int resReal = this->real + c2.real;
        int resImg = this->img + c2.img;

        Complex c3(resReal, resImg);
        cout<<"res = ";
        c3.showNum();
    }
};

int main(){
    // 2. operator overloading
    Complex c1(1,2);
    Complex c2(4,5);
    c1.showNum();
    c2.showNum();

    c1 + c2; // before initializing the operator overloading it will give error
}