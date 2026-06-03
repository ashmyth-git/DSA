#include <iostream>
using namespace std;

int sum(int a, int b = 1){// a and b are parameters // b = 1 means default parameter if value of that parameter is missing then the default value ie 1 will be used
// and first paramter can not hold default parameter
    int sum = a + b;
    return sum;
}

int main(){
    int s = sum(4,6); // 4 and 6 are called arguments
    cout<<s;
    return 0;
}