#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec1(10, -1); // 10 is the size of vector and we initialize the vector with -1  means all the elements have -1 value || it will be useful in further topics not so relevant in this

    cout<<vec1.size()<<endl;

    for (int i = 0; i < vec1.size(); i++)
    {
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
}