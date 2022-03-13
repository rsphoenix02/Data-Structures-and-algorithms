#include <iostream>
using namespace std;
int FloorElement(int arr[], int N, int K)
{

    int s = 0;
    int e = N - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == K)
        {
            return arr[mid];
        }
        else if (arr[mid] > K)
        {
            e = mid - 1;
        }
        else
        {
            ans = arr[mid];
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n = 9;
    int arr[n] = {1, 2, 3, 4, 8, 10, 11, 12, 19};
    cout << FloorElement(arr, n, 6);
}