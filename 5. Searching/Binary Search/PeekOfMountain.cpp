#include <iostream>

using namespace std;

int PeekIndex(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] < arr[mid + 1])
            s = mid + 1;
        else
            e = mid;
    }
    return s;
}
int main()

{
    int n = 4;
    int arr[n] = {0, 10, 5, 2};
    int ans = PeekIndex(arr, n);
    cout << ans;
    return 0;
}
