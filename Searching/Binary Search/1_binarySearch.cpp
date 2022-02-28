#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int ele)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + end - start / 2;
        if (arr[mid] == ele)
        {
            return mid;
        }
        else if (arr[mid] > ele)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}
int main()

{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ele = 25;
    cout << binarySearch(arr, n, ele);

    return 0;
}
