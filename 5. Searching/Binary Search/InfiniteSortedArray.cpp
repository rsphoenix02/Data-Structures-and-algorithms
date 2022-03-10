#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
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

int SearchInfinite(int arr[], int key)
{

    int start = 0;
    int end = 1;
    if (arr[start] == key)
    {
        return start;
    }

    if (key > arr[end])
    {
        start = end;
        end = end * 2;
    }
    if (arr[end] == key)
    {
        return end;
    }
    return binarySearch(arr, start, end, key);
}
