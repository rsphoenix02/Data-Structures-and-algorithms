#include <bits/stdc++.h>
using namespace std;

bool palindrome(int i, string &s)
{
    if (i >= s.size() / 2)
    {
        return true;
    }
    if (s[i] != s[s.size() - 1 - i])
    {
        return false;
    }
    return palindrome(i + 1, s);
}

int main()
{
    string s = "MADAM";
    string k = "ROHAN";
    cout << palindrome(0, s) << endl;
    cout << palindrome(0, k) << endl;

    return 0;
}