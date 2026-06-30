#include <iostream>
using namespace std;

void counter(){
    static int count = 0; // when we use the static keyword it will be initialised at once in the  function 
    // example if we dont use static keyword above then it will give result 1 in all three calls but after using it will increase the value and give output 1,2,3 repectively
    // same applicable for class also but some changes
    count++;
    cout<<"count = "<<count<<endl;
}

class Example{
    public:
    static int x; // we can use static keyword in class also but cannot declare its value in the class itself we have to decalre it outside the class
};

int Example:: x = 0;

int main(){
    counter();
    counter();
    counter();

    Example e1;
    Example e2;
    Example e3;
    cout<<e1.x++<<endl;
    cout<<e2.x++<<endl;
    cout<<e3.x++<<endl;

}