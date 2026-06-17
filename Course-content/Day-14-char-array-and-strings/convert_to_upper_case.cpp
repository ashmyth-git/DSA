#include <iostream>
#include <string.h>
using namespace std;

void toUpper(char word[6], int n){
    for (int i = 0; i < n; i++)
    {
        char ch = word[i];
        if (ch >= 'A' && ch <= 'Z') 
        {
            continue;
        }
        else{
            word[i] = ch - 'a' + 'A'; 
        }
    }
    cout<<word<<endl;
}

int main(){
    char word[] = {'A', 'p', 'P', 'L', 'e'};
    toUpper(word, strlen(word));
    return 0;
}