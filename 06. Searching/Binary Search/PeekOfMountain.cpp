#include <iostream>
using namespace std;

int peakIndex(int arr[], int n)
{
    if (n <= 0)
    {
        return 0;
    }
    if (arr[0] > arr[1])
    {
        return 0;
    }

    if (arr[n - 1] > arr[n - 2])
    {
        return n - 1;
    }

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()

{
    int n = 4;
    int arr[n] = {0, 10, 5, 2};
    int ans = peakIndex(arr, n);
    cout << ans;
    return 0;
}
