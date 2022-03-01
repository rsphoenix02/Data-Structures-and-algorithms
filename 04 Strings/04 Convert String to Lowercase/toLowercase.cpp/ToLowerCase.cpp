#include <iostream>

using namespace std;

char ToLowercase(char ch)
{
    ch = ch - 'A' + 'a';
    return ch;
}
int main()
{

    char a = 'A';
    cout << ToLowercase(a);

    return 0;
}
