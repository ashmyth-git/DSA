#include <iostream>
using namespace std;

bool areAlmostEqual(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    char diffChar1 = 0, diffChar2 = 0;
    int diff = 0;

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {

            if (diff == 0) {
                diffChar1 = s1[i];
                diffChar2 = s2[i];
            }
            else if (diff == 1) {
                if (s1[i] != diffChar2 || s2[i] != diffChar1) {
                    return false;
                }
            }
            else {
                return false; // more than 2 mismatches
            }

            diff++;
        }
    }

    if (diff == 1) {
        return false; // only one mismatch cannot be fixed by swap
    }

    return true;
}

int main() {
    string s1 = "bank";
    string s2 = "kanb";

    if (areAlmostEqual(s1, s2))
        cout << "true";
    else
        cout << "false";

    return 0;
}