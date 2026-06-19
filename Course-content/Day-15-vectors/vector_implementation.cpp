#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec1{1,2,3,4};
    cout<<"Vector size = "<<vec1.size()<<endl;
    cout<<"Vector capacity = "<<vec1.capacity()<<endl;
    
    vec1.push_back(5); // it is used to add a element in the pre initialized vector
    // and this works in such a way that it will create a new vector of double size and copy all the previous element in the new vector and then add the new element in the new vector
    // for example in this case the vector is of 4 size and when we add the 5th element it will create a vector of 8 size and capacity
    cout<<"Vector size = "<<vec1.size()<<endl;
    cout<<"Vector capacity = "<<vec1.capacity()<<endl;
    
    vec1.pop_back(); // this is used to remove an element from a vector
    cout<<"Vector size = "<<vec1.size()<<endl;
    cout<<"Vector capacity = "<<vec1.capacity()<<endl;

    return 0;
}