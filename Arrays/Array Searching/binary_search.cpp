//  Elements must be in sorted order
#include <iostream>
using namespace std;

int binarySearch(int arr[], int x, int n)
{
    int start = 0;
    int end = n;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
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
    cout << "Enter size of Array: ";
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int x;
    cout << " Enter the variable to find: ";
    cin >> x;

    cout << binarySearch(array, x, n) << endl;

    return 0;
}