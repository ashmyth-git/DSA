#include <iostream>
#include <string>
using namespace std;

void removeDublicates(string str, string ans, int i, int map[26])
{
    if (i == str.size())
    {
        cout<<"ans: "<<ans<<endl;
        return ;
    }
    
    char ch = str[i];
    int mapIdx = (int)(ch - 'a');

    if (map[mapIdx] == true)
    { // dublicate character
        removeDublicates(str, ans, i + 1, map);
    }

    else
    {
        map[mapIdx] = true;
        removeDublicates(str, ans + str[i], i + 1, map);
    }
}

int main()
{
    string str = "apnacollege";
    string ans = "";
    int map[26] = {false};

    removeDublicates(str, ans, 0, map);
    return 0;
}