#include <iostream>
using namespace std;
int binarySearch(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int pivot = arr[0];
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if ((arr[mid] < arr[mid - 1]) and (arr[mid] < arr[mid + 1]))
        {
            pivot = arr[mid];
            return pivot;
        }
        else
        {
            if (((arr[mid + 1] > arr[mid]) and (arr[mid] > arr[0])) or (arr[mid + 1] < arr[mid] and arr[mid] > arr[0]))
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return pivot;
}

int main()
{

    int arr[5] = {3, 4, 5, 1, 2};
    cout << binarySearch(arr, 5);
}