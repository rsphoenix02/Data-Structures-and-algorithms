#include <iostream>
using namespace std;

int FirstOccurance(int arr[], int n, int ele)
{
    int start = 0, end = n - 1;
    int res = -1;
    while (start <= end)
    {
        int mid = start + end - start / 2;

        if (arr[mid] == ele)
        {
            res = mid;
            end = mid - 1;
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

    return res;
}
int LastOccurance(int arr[], int n, int ele)
{
    int start = 0, end = n - 1;
    int res = -1;
    while (start <= end)
    {
        int mid = start + end - start / 2;

        if (arr[mid] == ele)
        {
            res = mid;
            start = mid + 1;
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

    return res;
}

int main()
{
    int n = 7;
    int arr[n] = {2, 4, 10, 10, 10, 18, 20};
    int ele = 10;
    int result = (LastOccurance(arr, n, ele) - FirstOccurance(arr, n, ele)) + 1;
    cout << result;
    return 0;
}
