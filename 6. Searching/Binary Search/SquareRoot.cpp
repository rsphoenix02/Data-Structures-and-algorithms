#include <bits/stdc++.h>
using namespace std;

int sqRoot(int n) // time comp. O(logn)
{
    long long int s = 0;
    long long int e = n;

    long long int ans = -1;
    while (s <= e)
    {
        long long int mid = s + (e - s) / 2;
        long long int mid_sq = mid * mid;

        if (mid_sq == n)
        {
            return mid;
        }
        else if (mid_sq > n)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
            ans = mid;
        }
    }

    return ans;
}

int main()
{
    long long int n = 7777777772;

    cout << sqRoot(n);
    return 0;
}