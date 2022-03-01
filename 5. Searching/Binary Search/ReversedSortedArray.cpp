//  Program to binary search in reversed array

#include <iostream>
using namespace std;

int binarySearch(int arr[], int ele, int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + end - start / 2;
        if (arr[mid] == ele)
        {
            return mid;
        }

        if (arr[mid] > ele)
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
    int n = 8;
    int arr[n] = {10, 9, 8, 7, 5, 4, 2, 1};
    int ele = 2;
    cout << binarySearch(arr, ele, n);
    return 0;
}
