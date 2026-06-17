#include <iostream>
#include <cstring>
using namespace std;

int countVowels(char word[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (word[i] == 'a' || word[i] == 'e' ||
            word[i] == 'i' || word[i] == 'o' ||
            word[i] == 'u') {
            count++;
        }
    }
    cout<<"number of vowels = "<<count<<endl;
    return count;
}

int main() {
    char word[100];
    cout << "Enter string: ";
    cin >> word;
    countVowels(word, strlen(word));
    return 0;
}