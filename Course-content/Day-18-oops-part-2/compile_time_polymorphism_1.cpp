#include <iostream>
using namespace std;

class Print{
    public:
    
    void Show(int x){
        cout<<"int: "<<x<<endl;
    }

    void Show(string str){
        cout<<"string: "<<str<<endl;
    }
};

int main(){
    // 1. function overloading
    Print p1;
    p1.Show("asg");
    p1.Show(25);
}