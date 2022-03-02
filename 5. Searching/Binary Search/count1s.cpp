#include <iostream>
using namespace std;

int countOne(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == 0)
        {
            s = mid + 1;
        }
        else
        {
            if (mid == 0 or arr[mid - 1] != arr[mid])
            {
                return (n - mid);
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return 0;
}

int main()

{
    int arr[7] = {0, 0, 0, 0, 1, 1, 1};
    cout << countOne(arr, 7);

    return 0;
}
