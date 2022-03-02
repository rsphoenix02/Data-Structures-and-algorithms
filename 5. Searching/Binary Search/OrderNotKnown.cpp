#include <iostream>
using namespace std;

// We Dont know if array is sorted in reverse order or proper
int binarySearch(int arr[], int ele, int n)
{
    int start = 0, end = n - 1, i = 0;
    if (arr[i] < arr[i + 1])
    {
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
    else
    {
        while (start <= end)
        {
            int mid = start + end - start / 2;

            if (arr[mid] == ele)
            {
                return mid;
            }
            else if (arr[mid] > ele)
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
    return -1;
}
int main()

{
    int n = 8;
    int arr1[n] = {10, 9, 8, 7, 6, 5, 1, 0};
    int arr2[n] = {1, 4, 7, 9, 11, 16, 17, 19};

    int ele = 7;
    cout << binarySearch(arr1, ele, n) << endl;
    cout << binarySearch(arr2, ele, n) << endl;
    return 0;
}
