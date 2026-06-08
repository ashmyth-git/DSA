#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter number " << endl;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "Entered number is even " << endl;
    }
    else{
        cout<<"Entered number is odd "<<endl;
    }
}