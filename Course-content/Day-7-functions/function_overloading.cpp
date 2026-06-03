#include <iostream>
using namespace std;
int sum(int a, int b){
    cout<< (a+b) <<endl;
    return a + b;
}

int sum(double a, double b){ // the name of both the function is same but the paramter used are different for example in third case 2.5 and 3.5 give output as 5 which is wrong coz it is a double value and it got estimated but after using second function it automatically detects the type of value is given in the input and perform function accordingly
    cout<<(a+b)<< endl;
    return a+b;
}

int main(){
    sum(2,3);
    sum(5,10);
    sum(2.5,3.5);
}