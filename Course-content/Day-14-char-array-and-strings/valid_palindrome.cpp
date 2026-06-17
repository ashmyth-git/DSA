#include <iostream>
#include <string.h>
using namespace std;

bool palin(char word[], int n){
    int st = 0;
    int end = n-1;
    while (st < end)
    {
        if (word[st] != word[end])
        {
            cout<<"Not valid palindrome"<<endl;
            return false;
        }
        st++; 
        end--;
    }
    cout<<"It is palindrome"<<endl;
    return true;
}

int main(){
    char word[] = "racecar";
    palin(word, strlen(word));
    return 0;
}