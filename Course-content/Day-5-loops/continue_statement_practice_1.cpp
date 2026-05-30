#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i >0; i++)
    {
        
        cout<<"Enter number "<<endl;
        cin>>i;
        if (i%10==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
    
}