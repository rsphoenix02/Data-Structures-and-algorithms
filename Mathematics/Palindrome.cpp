#include <iostream>

using namespace std;

bool palindrome(int n)
{
    int original = n;
    // To reverse the number
    int ans;
    while (n)
    {
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return (original == ans);
}

int main()

{
    int n = 12321;
    cout << palindrome(n);

    return 0;
}
