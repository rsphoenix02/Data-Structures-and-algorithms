#include <string>
#include <iostream>
#include <vector>
using namespace std;

//  Convert uppercase element to lowercase
char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
//  To check if string palindrome or not
bool checkPalindrome(string a)
{
    int s = 0;
    int e = a.length() - 1;

    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

int main()
{
    char name1[10] = "saiyam";
    char name2[10] = "naman";
    cout << checkPalindrome(name1) << endl;
    cout << checkPalindrome(name2) << endl;
}
