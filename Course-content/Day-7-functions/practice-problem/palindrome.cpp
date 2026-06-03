#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int res = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        res = res * 10 + lastDigit;
        n /= 10;
    }

    return res;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int reversed = reverseNumber(n);

    cout << "Reversed number: " << reversed << endl;

    if (n == reversed) {
        cout << "Palindrome Number" << endl;
    } else {
        cout << "Not a Palindrome Number" << endl;
    }

    return 0;
}