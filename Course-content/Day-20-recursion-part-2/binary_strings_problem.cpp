#include <iostream>
using namespace std;

void binaryString(int n, int lastPlace, string ans) {
    if (n == 0) {
        cout << ans << endl;
        return;
    }

    // Always place 0
    binaryString(n - 1, 0, ans + '0');

    // Place 1 only if previous bit was not 1
    if (lastPlace != 1) {
        binaryString(n - 1, 1, ans + '1');
    }
}

int main() {
    binaryString(3, 0, "");
    return 0;
}