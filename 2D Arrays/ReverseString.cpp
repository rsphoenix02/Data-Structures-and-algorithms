#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverse(string name)
{
    int start = 0, end = name.size() - 1;
    while (start < end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }

    return name;
}

int main()
{
    string name;
    cin>> name;
    cout << reverse(name);
    return 0;
}