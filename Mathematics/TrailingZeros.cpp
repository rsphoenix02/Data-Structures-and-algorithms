#include <iostream>
using namespace std;

int trailingZeros(int n)
{
    int cnt = 0;

    // count number of occurences of 5
    int i = 5;

    while (i <= n)
    {
        cnt += n / i;
        i *= 5;
    }

    return cnt;
}
int main()
{
    int n = 121;

    cout << trailingZeros(n);

    return 0;
}
