#include <iostream>
using namespace std;

int CeilingElement(int arr[], int n, int x)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x)
        {
            return arr[mid];
        }

        if (arr[mid] < x)
        {
            s = mid + 1;
        }
        else
        {
            ans = arr[mid];
            e = mid - 1;
        }
    }
    return ans;
}
int main()

{
    int n = 8;
    int arr[n] = {1, 4, 7, 9, 11, 16, 17, 19};
    cout << CeilingElement(arr, n, 10);
    return 0;
}
