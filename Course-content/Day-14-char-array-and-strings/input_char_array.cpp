#include <iostream>
using namespace std;
int main(){
    char word[10];
    char sentence[10];
    // cin>> word; // if this used then we cannot input word with spaces
    // example hello world it will only print hello ignoring hello

    cin.getline(sentence, 10, '*');
    // at the last star means the input should be terminated if the user enter * as an input (it is known as delimiter) to limit the input 

    cout<<"Your word was "<<sentence<<endl;
}