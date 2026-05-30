#include <iostream>
using namespace std;
int main()
{
    char calc;
    int sum;
    int a, b;
    cout << "Enter first number " << endl;
    cin >> a;
    cout << "Enter second number " << endl;
    cin >> b;
    cout << "Enter operation " << endl;
    cin >> calc;

    switch (calc)
    {
    case '+':
        sum = a + b;
        cout << sum;
        break;
    case '-':
        sum = a - b;
        cout << sum;
        break;
    case '*':
        sum = a * b;
        cout << sum;
        break;
    case '/':
        sum = a / b;
        cout << sum;
        break;
        
    default : cout<<"Invalid operation "<<endl;
    }
}